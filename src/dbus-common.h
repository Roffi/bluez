/* *
 *  BlueZ - Bluetooth protocol stack for Linux
 *
 *  Copyright (C) 2006-2010  Nokia Corporation
 *  Copyright (C) 2004-2010  Marcel Holtmann <marcel@holtmann.org>
 *
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

#define MAX_PATH_LENGTH 64

void hcid_dbus_exit(void);
int hcid_dbus_init(void);
void hcid_dbus_unregister(void);

void dict_append_entry(DBusMessageIter *dict,
			const char *key, int type, void *val);

void dict_append_array(DBusMessageIter *dict, const char *key, int type,
			void *val, int n_elements);

dbus_bool_t emit_property_changed(DBusConnection *conn,
					const char *path,
					const char *interface,
					const char *name,
					int type, void *value);

dbus_bool_t emit_array_property_changed(DBusConnection *conn,
					const char *path,
					const char *interface,
					const char *name,
					int type, void *value);
