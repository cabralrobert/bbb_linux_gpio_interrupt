/*******************************************************
*                                                      *
*   Criado em: Seg 29/Ago/2016,  14:22 hs              *
*   Instituicao: Universidade Federal do Ceará         *
*   Autor: Robert Cabral                               *
*   email: robertcabral@alu.ufc.br                     *
*                                                      *
********************************************************/
#include "inc.h"
#include <glib.h>

static gboolean mic_button_callback(GIOChannel *source, GIOCondition condition, gpointer data)
{
  struct input_event ev;
  int bytes_read;

  g_io_channel_read_chars(source, (gchar *)&ev, sizeof(ev), &bytes_read, NULL);

  if (bytes_read > 0) {
    if (bytes_read != sizeof(ev)) {
      s_debug(1, "warning, only read %i bytes from mic input");
      return TRUE;
    }
  } else {
    return TRUE;
  }

  if (ev.type != EV_SYN && ev.value == 1) {
    /* button pressed, do something ... */
	printf("Botão pressionado");
  }

  return TRUE;
}

void mic_button_init()
{
  GIOChannel * micbutton = g_io_channel_new_file(MIC_INPUT_DEV, "r", NULL);

  if (micbutton == NULL) {
    s_debug(TRUE, "Error initializing mic button");
    return;
  }

  g_io_channel_set_encoding(micbutton, NULL, NULL);

  guint id = g_io_add_watch(micbutton, G_IO_IN, mic_button_callback, NULL);
}

