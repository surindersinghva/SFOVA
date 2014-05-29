<?php
/**
 * @file
 * sfova_upcoming_events.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function sfova_upcoming_events_default_rules_configuration() {
  $items = array();
  $items['rules_member_notification_upcoming_events_1'] = entity_import('rules_config', '{ "rules_member_notification_upcoming_events_1" : {
      "LABEL" : "Member Notification Upcoming Events 1",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "php", "mimemail" ],
      "ON" : { "node_insert" : [  ] },
      "IF" : [
        { "node_is_published" : { "node" : [ "node" ] } },
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "upcoming_events" : "upcoming_events" } }
          }
        },
        { "data_is" : {
            "data" : [ "node:field-event-notification" ],
            "value" : "Send email now"
          }
        }
      ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "11" : "11", "3" : "3", "4" : "4", "5" : "5" } },
            "subject" : "Upcoming Event: [node:title]",
            "message" : "\\u003Cdiv style=\\u0022margin:10px; padding:10px;\\u0022\\u003E\\u000D\\u000A\\u003Ch1 style=\\u0022font-size:26px; font-family:BebasNeueRegular,Arial, serif; font-weight:normal; color:#333; margin:0px; padding:0px;\\u0022\\u003ESIKH FOUNDATION OF VIRGINIA\\u003C\\u002Fh1\\u003E\\u000D\\u000A\\u003Ch2 style=\\u0022font-size:16px; font-family:BebasNeueRegular,Arial, serif; font-weight:normal; color:#FF8002; margin:0px 0px 15px 0px; padding:0px;\\u0022\\u003EThe first Gurdwara in Virginia\\u003C\\u002Fh2\\u003E\\u000D\\u000A\\u003Cp style=\\u0022font: normal 11pt BebasNeueRegular; color:#444; margin:0px 0px 15px 0px; padding:0px;\\u0022\\u003EAn \\u003Cb\\u003EUpcoming Event\\u003C\\u002Fb\\u003E has been added\\u003C\\u002Fp\\u003E\\u000D\\u000A\\u003Ch3 style=\\u0022font: bold 14pt BebasNeueRegular,Arial, serif; margin:0px; padding:0px;\\u0022\\u003E\\u003Ca href=\\u0022http:\\u002F\\u002Fwww.sfova.org\\u002Fnode\\u002F[node:nid]\\u0022\\u003E[node:title]\\u003C\\u002Fa\\u003E\\u003C\\u002Fh3\\u003E\\u000D\\u000A\\u003Cp style=\\u0022font: normal 13pt BebasNeueRegular; color:#444;  margin:0px 0px 15px 0px; padding:0px;\\u0022\\u003E[node:body]\\u003C\\u002Fp\\u003E\\u000D\\u000A\\u003Cp style=\\u0022font: normal 9pt BebasNeueRegular; color:#444;  margin:0px 0px 15px 0px; padding:0px;\\u0022\\u003EYou are receiving this email because you have signed up to receive newsletter and updates from Sikh Foundation of VA. Please email to [site:mail] with your email address to unsubscribe.\\u003C\\u002Fp\\u003E\\u000D\\u000A\\u003Cp style=\\u0022font: normal 13pt BebasNeueRegular; color:#444;  margin:0px; padding:0px;\\u0022\\u003ESurinder Singh\\u003C\\u002Fp\\u003E \\u000D\\u000A\\u003Cp style=\\u0022font: normal 13pt BebasNeueRegular; color:#444;  margin:0px; padding:0px;\\u0022\\u003EPRO\\u003C\\u002Fp\\u003E\\u000D\\u000A\\u003Cp style=\\u0022font: normal 13pt BebasNeueRegular; color:#444;  margin:0px; padding:0px;\\u0022\\u003ESikh Foundation of VA\\u003C\\u002Fp\\u003E\\u000D\\u000A\\u003Cp style=\\u0022font: normal 13pt BebasNeueRegular; color:#444;  margin:0px; padding:0px;\\u0022\\u003E\\u003Ca href=\\u0022http:\\u002F\\u002Fwww.sfova.org\\u0022\\u003Ewww.sfova.org\\u003C\\u002Fa\\u003E\\u003C\\u002Fp\\u003E\\u000D\\u000A\\u003C\\u002Fdiv\\u003E",
            "from" : "admin@sfova.org"
          }
        },
        { "mimemail" : {
            "to" : "admin@sfova.org",
            "bcc" : "\\u003Cdiv style=\\u0022width:600px\\u0022\\u003E\\u000D\\u000A\\u003C?php\\u000D\\u000A$query = db_query(\\u0022SELECT simplenews_subscriber.snid, simplenews_subscriber.mail, simplenews_subscriber.activated, simplenews_subscription.snid, simplenews_subscription.tid FROM simplenews_subscriber LEFT JOIN simplenews_subscription ON simplenews_subscriber.snid = simplenews_subscription.snid WHERE simplenews_subscription.tid = \\u00271\\u0027 AND simplenews_subscriber.activated = \\u00271\\u0027 ORDER BY simplenews_subscriber.snid ASC\\u0022)-\\u003EfetchAll();\\u000D\\u000A\\u0009foreach($query as $value)\\u000D\\u000A\\u0009{\\u0009\\u000D\\u000A\\u0009\\u0009$mail[] = $value-\\u003Email;\\u000D\\u000A\\u0009}\\u000D\\u000A$email = implode(\\u0022, \\u0022,$mail);\\u000D\\u000Areturn $email;\\u000D\\u000A?\\u003E\\u000D\\u000A\\u003C\\u002Fdiv\\u003E",
            "from_name" : "Sikh Foundation of VA",
            "from_mail" : "admin@sfova.org",
            "subject" : "[node:title]",
            "body" : "\\u003Cdiv style=\\u0022margin:10px; padding:10px;\\u0022\\u003E\\u000D\\u000A\\u003Ch1 style=\\u0022font-size:26px; font-family:BebasNeueRegular,Arial, serif; font-weight:normal; color:#333; margin:0px; padding:0px;\\u0022\\u003ESIKH FOUNDATION OF VIRGINIA\\u003C\\u002Fh1\\u003E\\u000D\\u000A\\u003Ch2 style=\\u0022font-size:16px; font-family:BebasNeueRegular,Arial, serif; font-weight:normal; color:#FF8002; margin:0px 0px 15px 0px; padding:0px;\\u0022\\u003EThe first Gurdwara in Virginia\\u003C\\u002Fh2\\u003E\\u000D\\u000A\\u003Cp style=\\u0022font: normal 11pt BebasNeueRegular; color:#444; margin:0px 0px 15px 0px; padding:0px;\\u0022\\u003EAn \\u003Cb\\u003EUpcoming Event\\u003C\\u002Fb\\u003E has been added\\u003C\\u002Fp\\u003E\\u000D\\u000A\\u003Ch3 style=\\u0022font: bold 14pt BebasNeueRegular,Arial, serif; margin:0px; padding:0px;\\u0022\\u003E\\u003Ca href=\\u0022http:\\u002F\\u002Fwww.sfova.org\\u002Fnode\\u002F[node:nid]\\u0022\\u003E[node:title]\\u003C\\u002Fa\\u003E\\u003C\\u002Fh3\\u003E\\u000D\\u000A\\u003Cp style=\\u0022font: normal 13pt BebasNeueRegular; color:#444;  margin:0px 0px 15px 0px; padding:0px;\\u0022\\u003E[node:body]\\u003C\\u002Fp\\u003E\\u000D\\u000A\\u003Cp style=\\u0022font: normal 9pt BebasNeueRegular; color:#444;  margin:0px 0px 15px 0px; padding:0px;\\u0022\\u003EYou are receiving this email because you have signed up to receive newsletter and updates from Sikh Foundation of VA. Please email to [site:mail] with your email address to unsubscribe.\\u003C\\u002Fp\\u003E\\u000D\\u000A\\u003Cp style=\\u0022font: normal 13pt BebasNeueRegular; color:#444;  margin:0px; padding:0px;\\u0022\\u003ESurinder Singh\\u003C\\u002Fp\\u003E \\u000D\\u000A\\u003Cp style=\\u0022font: normal 13pt BebasNeueRegular; color:#444;  margin:0px; padding:0px;\\u0022\\u003EPRO\\u003C\\u002Fp\\u003E\\u000D\\u000A\\u003Cp style=\\u0022font: normal 13pt BebasNeueRegular; color:#444;  margin:0px; padding:0px;\\u0022\\u003ESikh Foundation of VA\\u003C\\u002Fp\\u003E\\u000D\\u000A\\u003Cp style=\\u0022font: normal 13pt BebasNeueRegular; color:#444;  margin:0px; padding:0px;\\u0022\\u003E\\u003Ca href=\\u0022http:\\u002F\\u002Fwww.sfova.org\\u0022\\u003Ewww.sfova.org\\u003C\\u002Fa\\u003E\\u003C\\u002Fp\\u003E\\u000D\\u000A\\u003C\\u002Fdiv\\u003E",
            "plaintext" : "."
          }
        }
      ]
    }
  }');
  $items['rules_member_notification_upcoming_events_2'] = entity_import('rules_config', '{ "rules_member_notification_upcoming_events_2" : {
      "LABEL" : "Member Notification Upcoming Events 2",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "php", "mimemail" ],
      "ON" : { "node_update" : [  ] },
      "IF" : [
        { "node_is_published" : { "node" : [ "node" ] } },
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "upcoming_events" : "upcoming_events" } }
          }
        },
        { "data_is" : {
            "data" : [ "node:field-event-notification" ],
            "value" : "Send reminder"
          }
        }
      ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "11" : "11", "3" : "3", "4" : "4" } },
            "subject" : "Reminder: Upcoming Event: [node:title]",
            "message" : "\\u003Cdiv style=\\u0022margin:10px; padding:10px;\\u0022\\u003E\\u000D\\u000A\\u003Ch1 style=\\u0022font-size:26px; font-family:BebasNeueRegular,Arial, serif; font-weight:normal; color:#333; margin:0px; padding:0px;\\u0022\\u003ESIKH FOUNDATION OF VIRGINIA\\u003C\\u002Fh1\\u003E\\u000D\\u000A\\u003Ch2 style=\\u0022font-size:16px; font-family:BebasNeueRegular,Arial, serif; font-weight:normal; color:#FF8002; margin:0px 0px 15px 0px; padding:0px;\\u0022\\u003EThe first Gurdwara in Virginia\\u003C\\u002Fh2\\u003E\\u000D\\u000A\\u003Cp style=\\u0022font: normal 11pt BebasNeueRegular; color:#444; margin:0px 0px 15px 0px; padding:0px;\\u0022\\u003EReminder: \\u003Cb\\u003EUpcoming Event\\u003C\\u002Fb\\u003E\\u003C\\u002Fp\\u003E\\u000D\\u000A\\u003Ch3 style=\\u0022font: bold 14pt BebasNeueRegular,Arial, serif; margin:0px; padding:0px;\\u0022\\u003E\\u003Ca href=\\u0022http:\\u002F\\u002Fwww.sfova.org\\u002Fnode\\u002F[node:nid]\\u0022\\u003E[node:title]\\u003C\\u002Fa\\u003E\\u003C\\u002Fh3\\u003E\\u000D\\u000A\\u003Cp style=\\u0022font: normal 13pt BebasNeueRegular; color:#444;  margin:0px 0px 15px 0px; padding:0px;\\u0022\\u003E[node:body]\\u003C\\u002Fp\\u003E\\u000D\\u000A\\u003Cp style=\\u0022font: normal 9pt BebasNeueRegular; color:#444;  margin:0px 0px 15px 0px; padding:0px;\\u0022\\u003EYou are receiving this email because you have signed up to receive newsletter and updates from Sikh Foundation of VA. Please email to [site:mail] with your email address to unsubscribe.\\u003C\\u002Fp\\u003E\\u000D\\u000A\\u003Cp style=\\u0022font: normal 13pt BebasNeueRegular; color:#444;  margin:0px; padding:0px;\\u0022\\u003EWeb Admin\\u003C\\u002Fp\\u003E \\u000D\\u000A\\u003Cp style=\\u0022font: normal 13pt BebasNeueRegular; color:#444;  margin:0px; padding:0px;\\u0022\\u003ESikh Foundation of VA\\u003C\\u002Fp\\u003E\\u000D\\u000A\\u003Cp style=\\u0022font: normal 13pt BebasNeueRegular; color:#444;  margin:0px; padding:0px;\\u0022\\u003E\\u003Ca href=\\u0022http:\\u002F\\u002Fwww.sfova.org\\u0022\\u003Ewww.sfova.org\\u003C\\u002Fa\\u003E\\u003C\\u002Fp\\u003E\\u000D\\u000A\\u003C\\u002Fdiv\\u003E",
            "from" : "admin@sfova.org"
          }
        },
        { "mimemail" : {
            "to" : "admin@sfova.org",
            "bcc" : "\\u003Cdiv style=\\u0022width:600px\\u0022\\u003E\\u000D\\u000A\\u003C?php\\u000D\\u000A$query = db_query(\\u0022SELECT simplenews_subscriber.snid, simplenews_subscriber.mail, simplenews_subscriber.activated, simplenews_subscription.snid, simplenews_subscription.tid FROM simplenews_subscriber LEFT JOIN simplenews_subscription ON simplenews_subscriber.snid = simplenews_subscription.snid WHERE simplenews_subscription.tid = \\u00271\\u0027 AND simplenews_subscriber.activated = \\u00271\\u0027 ORDER BY simplenews_subscriber.snid ASC\\u0022)-\\u003EfetchAll();\\u000D\\u000A\\u0009foreach($query as $value)\\u000D\\u000A\\u0009{\\u0009\\u000D\\u000A\\u0009\\u0009$mail[] = $value-\\u003Email;\\u000D\\u000A\\u0009}\\u000D\\u000A$email = implode(\\u0022, \\u0022,$mail);\\u000D\\u000Areturn $email;\\u000D\\u000A?\\u003E\\u000D\\u000A\\u003C\\u002Fdiv\\u003E",
            "from_name" : "Sikh Foundation of VA",
            "from_mail" : "admin@sfova.org",
            "subject" : "[node:title]",
            "body" : "\\u003Cdiv style=\\u0022margin:10px; padding:10px;\\u0022\\u003E\\u000D\\u000A\\u003Ch1 style=\\u0022font-size:26px; font-family:BebasNeueRegular,Arial, serif; font-weight:normal; color:#333; margin:0px; padding:0px;\\u0022\\u003ESIKH FOUNDATION OF VIRGINIA\\u003C\\u002Fh1\\u003E\\u000D\\u000A\\u003Ch2 style=\\u0022font-size:16px; font-family:BebasNeueRegular,Arial, serif; font-weight:normal; color:#FF8002; margin:0px 0px 15px 0px; padding:0px;\\u0022\\u003EThe first Gurdwara in Virginia\\u003C\\u002Fh2\\u003E\\u000D\\u000A\\u003Cp style=\\u0022font: normal 11pt BebasNeueRegular; color:#444; margin:0px 0px 15px 0px; padding:0px;\\u0022\\u003EReminder: \\u003Cb\\u003EUpcoming Event\\u003C\\u002Fb\\u003E\\u003C\\u002Fp\\u003E\\u000D\\u000A\\u003Ch3 style=\\u0022font: bold 14pt BebasNeueRegular,Arial, serif; margin:0px; padding:0px;\\u0022\\u003E\\u003Ca href=\\u0022http:\\u002F\\u002Fwww.sfova.org\\u002Fnode\\u002F[node:nid]\\u0022\\u003E[node:title]\\u003C\\u002Fa\\u003E\\u003C\\u002Fh3\\u003E\\u000D\\u000A\\u003Cp style=\\u0022font: normal 13pt BebasNeueRegular; color:#444;  margin:0px 0px 15px 0px; padding:0px;\\u0022\\u003E[node:body]\\u003C\\u002Fp\\u003E\\u000D\\u000A\\u003Cp style=\\u0022font: normal 9pt BebasNeueRegular; color:#444;  margin:0px 0px 15px 0px; padding:0px;\\u0022\\u003EYou are receiving this email because you have signed up to receive newsletter and updates from Sikh Foundation of VA. Please email to [site:mail] with your email address to unsubscribe.\\u003C\\u002Fp\\u003E\\u000D\\u000A\\u003Cp style=\\u0022font: normal 13pt BebasNeueRegular; color:#444;  margin:0px; padding:0px;\\u0022\\u003EWeb Admin\\u003C\\u002Fp\\u003E \\u000D\\u000A\\u003Cp style=\\u0022font: normal 13pt BebasNeueRegular; color:#444;  margin:0px; padding:0px;\\u0022\\u003ESikh Foundation of VA\\u003C\\u002Fp\\u003E\\u000D\\u000A\\u003Cp style=\\u0022font: normal 13pt BebasNeueRegular; color:#444;  margin:0px; padding:0px;\\u0022\\u003E\\u003Ca href=\\u0022http:\\u002F\\u002Fwww.sfova.org\\u0022\\u003Ewww.sfova.org\\u003C\\u002Fa\\u003E\\u003C\\u002Fp\\u003E\\u000D\\u000A\\u003C\\u002Fdiv\\u003E",
            "plaintext" : "."
          }
        }
      ]
    }
  }');
  $items['rules_member_notification_upcoming_events_update'] = entity_import('rules_config', '{ "rules_member_notification_upcoming_events_update" : {
      "LABEL" : "Member Notification Upcoming Events 1",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "php", "mimemail" ],
      "ON" : { "node_update" : [  ] },
      "IF" : [
        { "node_is_published" : { "node" : [ "node" ] } },
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "upcoming_events" : "upcoming_events" } }
          }
        },
        { "data_is" : {
            "data" : [ "node:field-event-notification" ],
            "value" : "Send email now"
          }
        }
      ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "11" : "11", "3" : "3", "4" : "4" } },
            "subject" : "Upcoming Event: [node:title]",
            "message" : "\\u003Cdiv style=\\u0022margin:10px; padding:10px;\\u0022\\u003E\\u000D\\u000A\\u003Ch1 style=\\u0022font-size:26px; font-family:BebasNeueRegular,Arial, serif; font-weight:normal; color:#333; margin:0px; padding:0px;\\u0022\\u003ESIKH FOUNDATION OF VIRGINIA\\u003C\\u002Fh1\\u003E\\u000D\\u000A\\u003Ch2 style=\\u0022font-size:16px; font-family:BebasNeueRegular,Arial, serif; font-weight:normal; color:#FF8002; margin:0px 0px 15px 0px; padding:0px;\\u0022\\u003EThe first Gurdwara in Virginia\\u003C\\u002Fh2\\u003E\\u000D\\u000A\\u003Cp style=\\u0022font: normal 11pt BebasNeueRegular; color:#444; margin:0px 0px 15px 0px; padding:0px;\\u0022\\u003E\\u003Cb\\u003EUpcoming Event\\u003C\\u002Fb\\u003E\\u003C\\u002Fp\\u003E\\u000D\\u000A\\u003Ch3 style=\\u0022font: bold 14pt BebasNeueRegular,Arial, serif; margin:0px; padding:0px;\\u0022\\u003E\\u003Ca href=\\u0022http:\\u002F\\u002Fwww.sfova.org\\u002Fnode\\u002F[node:nid]\\u0022\\u003E[node:title]\\u003C\\u002Fa\\u003E\\u003C\\u002Fh3\\u003E\\u000D\\u000A\\u003Cp style=\\u0022font: normal 13pt BebasNeueRegular; color:#444;  margin:0px 0px 15px 0px; padding:0px;\\u0022\\u003E[node:body]\\u003C\\u002Fp\\u003E\\u000D\\u000A\\u003Cp style=\\u0022font: normal 9pt BebasNeueRegular; color:#444;  margin:0px 0px 15px 0px; padding:0px;\\u0022\\u003EYou are receiving this email because you have signed up to receive newsletter and updates from Sikh Foundation of VA. Please email to [site:mail] with your email address to unsubscribe.\\u003C\\u002Fp\\u003E\\u000D\\u000A\\u003Cp style=\\u0022font: normal 13pt BebasNeueRegular; color:#444;  margin:0px; padding:0px;\\u0022\\u003EWeb Admin\\u003C\\u002Fp\\u003E \\u000D\\u000A\\u003Cp style=\\u0022font: normal 13pt BebasNeueRegular; color:#444;  margin:0px; padding:0px;\\u0022\\u003ESikh Foundation of VA\\u003C\\u002Fp\\u003E\\u000D\\u000A\\u003Cp style=\\u0022font: normal 13pt BebasNeueRegular; color:#444;  margin:0px; padding:0px;\\u0022\\u003E\\u003Ca href=\\u0022http:\\u002F\\u002Fwww.sfova.org\\u0022\\u003Ewww.sfova.org\\u003C\\u002Fa\\u003E\\u003C\\u002Fp\\u003E\\u000D\\u000A\\u003C\\u002Fdiv\\u003E",
            "from" : "admin@sfova.org"
          }
        },
        { "mimemail" : {
            "to" : "admin@sfova.org",
            "bcc" : "\\u003C?php\\u000D\\u000A$query = db_query(\\u0022SELECT simplenews_subscriber.snid, simplenews_subscriber.mail, simplenews_subscriber.activated, simplenews_subscription.snid, simplenews_subscription.tid FROM simplenews_subscriber LEFT JOIN simplenews_subscription ON simplenews_subscriber.snid = simplenews_subscription.snid WHERE simplenews_subscription.tid = \\u00271\\u0027 AND simplenews_subscriber.activated = \\u00271\\u0027 ORDER BY simplenews_subscriber.snid ASC\\u0022)-\\u003EfetchAll();\\u000D\\u000A\\u0009foreach($query as $value)\\u000D\\u000A\\u0009{\\u0009\\u000D\\u000A\\u0009\\u0009$mail[] = $value-\\u003Email;\\u000D\\u000A\\u0009}\\u000D\\u000A$email = implode(\\u0022, \\u0022,$mail);\\u000D\\u000Areturn $email;\\u000D\\u000A?\\u003E\\u000D\\u000A",
            "from_name" : "Sikh Foundation of VA",
            "from_mail" : "admin@sfova.org",
            "subject" : "Upcoming Event: [node:title]",
            "body" : "\\u003Cdiv style=\\u0022margin:10px; padding:10px;\\u0022\\u003E\\u000D\\u000A\\u003Ch1 style=\\u0022font-size:26px; font-family:BebasNeueRegular,Arial, serif; font-weight:normal; color:#333; margin:0px; padding:0px;\\u0022\\u003ESIKH FOUNDATION OF VIRGINIA\\u003C\\u002Fh1\\u003E\\u000D\\u000A\\u003Ch2 style=\\u0022font-size:16px; font-family:BebasNeueRegular,Arial, serif; font-weight:normal; color:#FF8002; margin:0px 0px 15px 0px; padding:0px;\\u0022\\u003EThe first Gurdwara in Virginia\\u003C\\u002Fh2\\u003E\\u000D\\u000A\\u003Cp style=\\u0022font: normal 11pt BebasNeueRegular; color:#444; margin:0px 0px 15px 0px; padding:0px;\\u0022\\u003EUpcoming Event: \\u003Cb\\u003EUpcoming Event\\u003C\\u002Fb\\u003E\\u003C\\u002Fp\\u003E\\u000D\\u000A\\u003Ch3 style=\\u0022font: bold 14pt BebasNeueRegular,Arial, serif; margin:0px; padding:0px;\\u0022\\u003E\\u003Ca href=\\u0022http:\\u002F\\u002Fwww.sfova.org\\u002Fnode\\u002F[node:nid]\\u0022\\u003E[node:title]\\u003C\\u002Fa\\u003E\\u003C\\u002Fh3\\u003E\\u000D\\u000A\\u003Cp style=\\u0022font: normal 13pt BebasNeueRegular; color:#444;  margin:0px 0px 15px 0px; padding:0px;\\u0022\\u003E[node:body]\\u003C\\u002Fp\\u003E\\u000D\\u000A\\u003Cp style=\\u0022font: normal 9pt BebasNeueRegular; color:#444;  margin:0px 0px 15px 0px; padding:0px;\\u0022\\u003EYou are receiving this email because you have signed up to receive newsletter and updates from Sikh Foundation of VA. Please email to [site:mail] with your email address to unsubscribe.\\u003C\\u002Fp\\u003E\\u000D\\u000A\\u003Cp style=\\u0022font: normal 13pt BebasNeueRegular; color:#444;  margin:0px; padding:0px;\\u0022\\u003EWeb Admin\\u003C\\u002Fp\\u003E \\u000D\\u000A\\u003Cp style=\\u0022font: normal 13pt BebasNeueRegular; color:#444;  margin:0px; padding:0px;\\u0022\\u003ESikh Foundation of VA\\u003C\\u002Fp\\u003E\\u000D\\u000A\\u003Cp style=\\u0022font: normal 13pt BebasNeueRegular; color:#444;  margin:0px; padding:0px;\\u0022\\u003E\\u003Ca href=\\u0022http:\\u002F\\u002Fwww.sfova.org\\u0022\\u003Ewww.sfova.org\\u003C\\u002Fa\\u003E\\u003C\\u002Fp\\u003E\\u000D\\u000A\\u003C\\u002Fdiv\\u003E",
            "plaintext" : "."
          }
        }
      ]
    }
  }');
  $items['rules_new_content_has_been_added'] = entity_import('rules_config', '{ "rules_new_content_has_been_added" : {
      "LABEL" : "Admin notification of new content",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert" : [  ] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : {
                "email_addresses" : "email_addresses",
                "media" : "media",
                "recent_events" : "recent_events",
                "sfv_voice" : "sfv_voice",
                "upcoming_events" : "upcoming_events"
              }
            }
          }
        },
        { "node_is_published" : { "node" : [ "node" ] } }
      ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "11" : "11", "3" : "3", "4" : "4" } },
            "subject" : "New content has been added (for admins only)",
            "message" : "\\u003Cdiv style=\\u0022margin:10px; padding:10px;\\u0022\\u003E\\u000D\\u000A\\u003Ch1 style=\\u0022font-size:26px; font-family:BebasNeueRegular,Arial, serif; font-weight:normal; color:#333; margin:0px; padding:0px;\\u0022\\u003ESIKH FOUNDATION OF VIRGINIA\\u003C\\u002Fh1\\u003E\\u000D\\u000A\\u003Ch2 style=\\u0022font-size:16px; font-family:BebasNeueRegular,Arial, serif; font-weight:normal; color:#FF8002; margin:0px 0px 15px 0px; padding:0px;\\u0022\\u003EThe first Gurdwara in Virginia\\u003C\\u002Fh2\\u003E\\u000D\\u000A\\u003Cp style=\\u0022font: normal 11pt BebasNeueRegular; color:#444; margin:0px 0px 15px 0px; padding:0px;\\u0022\\u003ENew content has been added\\u003C\\u002Fp\\u003E\\u000D\\u000A\\u003Ch3 style=\\u0022font: bold 14pt BebasNeueRegular,Arial, serif; margin:0px; padding:0px;\\u0022\\u003E\\u003Ca href=\\u0022http:\\u002F\\u002Fwww.sfova.org\\u002Fnode\\u002F[node:nid]\\u0022\\u003E[node:title]\\u003C\\u002Fa\\u003E\\u003C\\u002Fh3\\u003E\\u000D\\u000A\\u003Cp style=\\u0022font: normal 13pt BebasNeueRegular; color:#444;  margin:0px 0px 15px 0px; padding:0px;\\u0022\\u003E\\u0026nbsp;\\u003C\\u002Fp\\u003E\\u000D\\u000A\\u003Cp style=\\u0022font: normal 10pt BebasNeueRegular; color:#444;  margin:0px 0px 15px 0px; padding:0px;\\u0022\\u003EThis email is for the office bearers only. If you are no longer an office bearer for SFV please email at admin@sfova.org\\u003C\\u002Fp\\u003E\\u000D\\u000A\\u003Cp style=\\u0022font: normal 13pt BebasNeueRegular; color:#444;  margin:0px; padding:0px;\\u0022\\u003ESurinder Singh\\u003C\\u002Fp\\u003E \\u000D\\u000A\\u003Cp style=\\u0022font: normal 13pt BebasNeueRegular; color:#444;  margin:0px; padding:0px;\\u0022\\u003EPRO\\u003C\\u002Fp\\u003E\\u000D\\u000A\\u003Cp style=\\u0022font: normal 13pt BebasNeueRegular; color:#444;  margin:0px; padding:0px;\\u0022\\u003ESikh Foundation of VA\\u003C\\u002Fp\\u003E\\u000D\\u000A\\u003Cp style=\\u0022font: normal 13pt BebasNeueRegular; color:#444;  margin:0px; padding:0px;\\u0022\\u003E\\u003Ca href=\\u0022http:\\u002F\\u002Fwww.sfova.org\\u0022\\u003Ewww.sfova.org\\u003C\\u002Fa\\u003E\\u003C\\u002Fp\\u003E\\u000D\\u000A\\u003C\\u002Fdiv\\u003E\\u000D\\u000A\\u003C\\u002Fdiv\\u003E"
          }
        }
      ]
    }
  }');
  return $items;
}
