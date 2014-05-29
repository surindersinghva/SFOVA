<?php
/**
 * @file
 * sfova_recent_events.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function sfova_recent_events_default_rules_configuration() {
  $items = array();
  $items['rules_member_notification_recent_activities'] = entity_import('rules_config', '{ "rules_member_notification_recent_activities" : {
      "LABEL" : "Member Notification Recent Activities",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "php", "mimemail" ],
      "ON" : { "node_insert" : [  ] },
      "IF" : [
        { "node_is_published" : { "node" : [ "node" ] } },
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "recent_events" : "recent_events" } }
          }
        }
      ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "11" : "11", "3" : "3", "4" : "4" } },
            "subject" : "[node:title]",
            "message" : "\\u003Cdiv style=\\u0022margin:10px; padding:10px;\\u0022\\u003E\\u000D\\u000A\\u003Ch1 style=\\u0022font-size:26px; font-family:BebasNeueRegular,Arial, serif; font-weight:normal; color:#333; margin:0px; padding:0px;\\u0022\\u003ESIKH FOUNDATION OF VIRGINIA\\u003C\\u002Fh1\\u003E\\u000D\\u000A\\u003Ch2 style=\\u0022font-size:16px; font-family:BebasNeueRegular,Arial, serif; font-weight:normal; color:#FF8002; margin:0px 0px 15px 0px; padding:0px;\\u0022\\u003EThe first Gurdwara in Virginia\\u003C\\u002Fh2\\u003E\\u000D\\u000A\\u003Cp style=\\u0022font: normal 11pt BebasNeueRegular; color:#444; margin:0px 0px 15px 0px; padding:0px;\\u0022\\u003EA \\u003Cb\\u003ERecent Event\\u003C\\u002Fb\\u003E has been added\\u003C\\u002Fp\\u003E\\u000D\\u000A\\u003Ch3 style=\\u0022font: bold 14pt BebasNeueRegular,Arial, serif; margin:0px; padding:0px;\\u0022\\u003E\\u003Ca href=\\u0022http:\\u002F\\u002Fwww.sfova.org\\u002Fnode\\u002F[node:nid]\\u0022\\u003E[node:title]\\u003C\\u002Fa\\u003E\\u003C\\u002Fh3\\u003E\\u000D\\u000A\\u003Cp style=\\u0022font: normal 13pt BebasNeueRegular; color:#444;  margin:0px 0px 15px 0px; padding:0px;\\u0022\\u003E[node:body]\\u003C\\u002Fp\\u003E\\u000D\\u000A\\u003Cp style=\\u0022font: normal 9pt BebasNeueRegular; color:#444;  margin:0px 0px 15px 0px; padding:0px;\\u0022\\u003EYou are receiving this email because you have signed up to receive newsletter and updates from Sikh Foundation of VA. Please email to [site:mail] with your email address to unsubscribe.\\u003C\\u002Fp\\u003E\\u000D\\u000A\\u003Cp style=\\u0022font: normal 13pt BebasNeueRegular; color:#444;  margin:0px; padding:0px;\\u0022\\u003ESurinder Singh\\u003C\\u002Fp\\u003E \\u000D\\u000A\\u003Cp style=\\u0022font: normal 13pt BebasNeueRegular; color:#444;  margin:0px; padding:0px;\\u0022\\u003EPRO\\u003C\\u002Fp\\u003E\\u000D\\u000A\\u003Cp style=\\u0022font: normal 13pt BebasNeueRegular; color:#444;  margin:0px; padding:0px;\\u0022\\u003ESikh Foundation of VA\\u003C\\u002Fp\\u003E\\u000D\\u000A\\u003Cp style=\\u0022font: normal 13pt BebasNeueRegular; color:#444;  margin:0px; padding:0px;\\u0022\\u003E\\u003Ca href=\\u0022http:\\u002F\\u002Fwww.sfova.org\\u0022\\u003Ewww.sfova.org\\u003C\\u002Fa\\u003E\\u003C\\u002Fp\\u003E\\u000D\\u000A\\u003C\\u002Fdiv\\u003E",
            "from" : "admin@sfova.org"
          }
        },
        { "mimemail" : {
            "to" : "admin@sfova.org",
            "bcc" : "\\u003Cdiv style=\\u0022width:600px\\u0022\\u003E\\u000D\\u000A\\u003C?php\\u000D\\u000A$query = db_query(\\u0022SELECT simplenews_subscriber.snid, simplenews_subscriber.mail, simplenews_subscriber.activated, simplenews_subscription.snid, simplenews_subscription.tid FROM simplenews_subscriber LEFT JOIN simplenews_subscription ON simplenews_subscriber.snid = simplenews_subscription.snid WHERE simplenews_subscription.tid = \\u00271\\u0027 AND simplenews_subscriber.activated = \\u00271\\u0027 ORDER BY simplenews_subscriber.snid ASC\\u0022)-\\u003EfetchAll();\\u000D\\u000A\\u0009foreach($query as $value)\\u000D\\u000A\\u0009{\\u0009\\u000D\\u000A\\u0009\\u0009$mail[] = $value-\\u003Email;\\u000D\\u000A\\u0009}\\u000D\\u000A$email = implode(\\u0022, \\u0022,$mail);\\u000D\\u000Areturn $email;\\u000D\\u000A?\\u003E\\u000D\\u000A\\u003C\\u002Fdiv\\u003E",
            "from_name" : "Sikh Foundation of VA",
            "from_mail" : "admin@sfova.org",
            "subject" : "[node:title]",
            "body" : "\\u003Cdiv style=\\u0022margin:10px; padding:10px;\\u0022\\u003E\\u000D\\u000A\\u003Ch1 style=\\u0022font-size:26px; font-family:BebasNeueRegular,Arial, serif; font-weight:normal; color:#333; margin:0px; padding:0px;\\u0022\\u003ESIKH FOUNDATION OF VIRGINIA\\u003C\\u002Fh1\\u003E\\u000D\\u000A\\u003Ch2 style=\\u0022font-size:16px; font-family:BebasNeueRegular,Arial, serif; font-weight:normal; color:#FF8002; margin:0px 0px 15px 0px; padding:0px;\\u0022\\u003EThe first Gurdwara in Virginia\\u003C\\u002Fh2\\u003E\\u000D\\u000A\\u003Cp style=\\u0022font: normal 11pt BebasNeueRegular; color:#444; margin:0px 0px 15px 0px; padding:0px;\\u0022\\u003EA \\u003Cb\\u003ERecent Event\\u003C\\u002Fb\\u003E has been added\\u003C\\u002Fp\\u003E\\u000D\\u000A\\u003Ch3 style=\\u0022font: bold 14pt BebasNeueRegular,Arial, serif; margin:0px; padding:0px;\\u0022\\u003E\\u003Ca href=\\u0022http:\\u002F\\u002Fwww.sfova.org\\u002Fnode\\u002F[node:nid]\\u0022\\u003E[node:title]\\u003C\\u002Fa\\u003E\\u003C\\u002Fh3\\u003E\\u000D\\u000A\\u003Cp style=\\u0022font: normal 13pt BebasNeueRegular; color:#444;  margin:0px 0px 15px 0px; padding:0px;\\u0022\\u003E[node:body]\\u003C\\u002Fp\\u003E\\u000D\\u000A\\u003Cp style=\\u0022font: normal 9pt BebasNeueRegular; color:#444;  margin:0px 0px 15px 0px; padding:0px;\\u0022\\u003EYou are receiving this email because you have signed up to receive newsletter and updates from Sikh Foundation of VA. Please email to [site:mail] with your email address to unsubscribe.\\u003C\\u002Fp\\u003E\\u000D\\u000A\\u003Cp style=\\u0022font: normal 13pt BebasNeueRegular; color:#444;  margin:0px; padding:0px;\\u0022\\u003ESurinder Singh\\u003C\\u002Fp\\u003E \\u000D\\u000A\\u003Cp style=\\u0022font: normal 13pt BebasNeueRegular; color:#444;  margin:0px; padding:0px;\\u0022\\u003EPRO\\u003C\\u002Fp\\u003E\\u000D\\u000A\\u003Cp style=\\u0022font: normal 13pt BebasNeueRegular; color:#444;  margin:0px; padding:0px;\\u0022\\u003ESikh Foundation of VA\\u003C\\u002Fp\\u003E\\u000D\\u000A\\u003Cp style=\\u0022font: normal 13pt BebasNeueRegular; color:#444;  margin:0px; padding:0px;\\u0022\\u003E\\u003Ca href=\\u0022http:\\u002F\\u002Fwww.sfova.org\\u0022\\u003Ewww.sfova.org\\u003C\\u002Fa\\u003E\\u003C\\u002Fp\\u003E\\u000D\\u000A\\u003C\\u002Fdiv\\u003E",
            "plaintext" : "."
          }
        }
      ]
    }
  }');
  return $items;
}
