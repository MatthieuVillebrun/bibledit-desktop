/*
** Copyright (©) 2003-2013 Teus Benschop.
**  
** This program is free software; you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation; either version 3 of the License, or
** (at your option) any later version.
**  
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**  
** You should have received a copy of the GNU General Public License
** along with this program; if not, write to the Free Software
** Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
**  
*/


#ifndef INCLUDED_DIALOG_INSERT_TABLE_H
#define INCLUDED_DIALOG_INSERT_TABLE_H


#include <gtk/gtk.h>
#include "ustring.h"


class InsertTableDialog
{
public:
  InsertTableDialog (const ustring& project, GtkWindow *transient_parent);
  ~InsertTableDialog ();
  int run ();
  ustring rawtext;
protected:
  GtkWidget *inserttabledialog;
  GtkWidget *dialog_vbox1;
  GtkWidget *vbox1;
  GtkWidget *label1;
  GtkWidget *table1;
  GtkWidget *label2;
  GtkWidget *label3;
  GtkObject *spinbutton_rows_adj;
  GtkWidget *spinbutton_rows;
  GtkObject *spinbutton_columns_adj;
  GtkWidget *spinbutton_columns;
  GtkWidget *dialog_action_area1;
  GtkWidget *cancelbutton;
  GtkWidget *okbutton;
private:
  ustring myproject;
  static void on_okbutton_clicked (GtkButton *button, gpointer user_data);
  void on_okbutton ();
};


#endif
