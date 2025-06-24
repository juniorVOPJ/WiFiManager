/**
 * wm_strings_en.h
 * engligh strings for
 * WiFiManager, a library for the ESP8266/Arduino platform
 * for configuration of WiFi credentials using a Captive Portal
 *
 * @author Creator juniorVOPJ
 * @version 0.0.0
 * @license MIT
 */

#ifndef _WM_STRINGS_EN_H_
#define _WM_STRINGS_EN_H_

#ifndef WIFI_MANAGER_OVERRIDE_STRINGS
// !!! ABOVE WILL NOT WORK if you define in your sketch, must be build flag, if anyone one knows how to order includes to be able to do this it would be neat.. I have seen it done..

// strings files must include a consts file!
#include "wm_consts_en.h" // include constants, tokens, routes

const char WM_LANGUAGE[] PROGMEM = "pt-BR"; // i18n lang code

const char HTTP_HEAD_START[] PROGMEM = "<!DOCTYPE html>"
									   "<html lang='pt'><head>"
									   "<meta name='format-detection' content='telephone=no'>"
									   "<meta charset='UTF-8'>"
									   "<meta  name='viewport' content='width=device-width,initial-scale=1,user-scalable=no'/>"
									   "<title>BITSENA</title>";

const char HTTP_SCRIPT[] PROGMEM = "<script>function c(l){"
								   "document.getElementById('s').value=l.getAttribute('data-ssid')||l.innerText||l.textContent;"
								   "p = l.nextElementSibling.classList.contains('l');"
								   "document.getElementById('p').disabled = !p;"
								   "if(p)document.getElementById('p').focus();};"
								   "function f() {var x = document.getElementById('p');x.type==='password'?x.type='text':x.type='password';}"
								   "</script>"; // @todo add button states, disable on click , show ack , spinner etc

const char HTTP_HEAD_END[] PROGMEM = "</head><body class='{c}'><div class='wrap'>"; // {c} = _bodyclass
// example of embedded logo, base64 encoded inline, No styling here
// const char HTTP_ROOT_MAIN[]        PROGMEM = "<img title=' alt=' src='data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAADAAAAAwCAYAAABXAvmHAAADQElEQVRoQ+2YjW0VQQyE7Q6gAkgFkAogFUAqgFQAVACpAKiAUAFQAaECQgWECggVGH1PPrRvn3dv9/YkFOksoUhhfzwz9ngvKrc89JbnLxuA/63gpsCmwCADWwkNEji8fVNgotDM7osI/x777x5l9F6JyB8R4eeVql4P0y8yNsjM7KGIPBORp558T04A+CwiH1UVUItiUQmZ2XMReSEiAFgjAPBeVS96D+sCYGaUx4cFbLfmhSpnqnrZuqEJgJnd8cQplVLciAgX//Cf0ToIeOB9wpmloLQAwpnVmAXgdf6pwjpJIz+XNoeZQQZlODV9vhc1Tuf6owrAk/8qIhFbJH7eI3eEzsvydQEICqBEkZwiALfF70HyHPpqScPV5HFjeFu476SkRA0AzOfy4hYwstj2ZkDgaphE7m6XqnoS7Q0BOPs/sw0kDROzjdXcCMFCNwzIy0EcRcOvBACfh4k0wgOmBX4xjfmk4DKTS31hgNWIKBCI8gdzogTgjYjQWFMw+o9LzJoZ63GUmjWm2wGDc7EvDDOj/1IVMIyD9SUAL0WEhpriRlXv5je5S+U1i2N88zdPuoVkeB+ls4SyxCoP3kVm9jsjpEsBLoOBNC5U9SwpGdakFkviuFP1keblATkTENTYcxkzgxTKOI3jyDxqLkQT87pMA++H3XvJBYtsNbBN6vuXq5S737WqHkW1VgMQNXJ0RshMqbbT33sJ5kpHWymzcJjNTeJIymJZtSQd9NHQHS1vodoFoTMkfbJzpRnLzB2vi6BZAJxWaCr+62BC+jzAxVJb3dmmiLzLwZhZNPE5e880Suo2AZgB8e8idxherqUPnT3brBDTlPxO3Z66rVwIwySXugdNd+5ejhqp/+NmgIwGX3Py3QBmlEi54KlwmjkOytQ+iJrLJj23S4GkOeecg8G091no737qvRRdzE+HLALQoMTBbJgBsCj5RSWUlUVJiZ4SOljb05eLFWgoJ5oY6yTyJp62D39jDANoKKcSocPJD5dQYzlFAFZJflUArgTPZKZwLXAnHmerfJquUkKZEgyzqOb5TuDt1P3nwxobqwPocZA11m4A1mBx5IxNgRH21ti7KbAGiyNn3HoF/gJ0w05A8xclpwAAAABJRU5ErkJggg==' /><h1>{v}</h1><h3>WiFiManager</h3>";
const char HTTP_ROOT_MAIN[] PROGMEM = '<h1><a href="https : // bitsena.com.br">BITSENA</a></h1><h3>Configuração</h3>';

const char *const HTTP_PORTAL_MENU[] PROGMEM = {
	"<form action='/wifi'    method='get'><button>WiFi e carteira Bitcoin</button></form><br/>\n",			  // MENU_WIFI
	"<form action='/0wifi'   method='get'><button>WiFi e carteira Bitcoin (sem scan)</button></form><br/>\n", // MENU_WIFINOSCAN
	"<form action='/info'    method='get'><button>Informações</button></form><br/>\n",						  // MENU_INFO
	"<form action='/param'   method='get'><button>Configurar</button></form><br/>\n",						  // MENU_PARAM
	"<form action='/close'   method='get'><button>Fechar</button></form><br/>\n",							  // MENU_CLOSE
	"<form action='/restart' method='get'><button>Reiniciar</button></form><br/>\n",						  // MENU_RESTART
	"<form action='/exit'    method='get'><button>Sair</button></form><br/>\n",								  // MENU_EXIT
	"<form action='/erase'   method='get'><button class='D'>Apagar</button></form><br/>\n",					  // MENU_ERASE
	"<form action='/update'  method='get'><button>Atualizar</button></form><br/>\n",						  // MENU_UPDATE
	"<hr><br/>"																								  // MENU_SEP
};

// const char HTTP_PORTAL_OPTIONS[]   PROGMEM = strcat(HTTP_PORTAL_MENU[0] , HTTP_PORTAL_MENU[3] , HTTP_PORTAL_MENU[7]);
const char HTTP_PORTAL_OPTIONS[] PROGMEM = "";
const char HTTP_ITEM_QI[] PROGMEM = "<div role='img' aria-label='{r}%' title='{r}%' class='q q-{q} {i} {h}'></div>"; // rssi icons
const char HTTP_ITEM_QP[] PROGMEM = "<div class='q {h}'>{r}%</div>";												 // rssi percentage {h} = hidden showperc pref
const char HTTP_ITEM[] PROGMEM = "<div><a href='#p' onclick='c(this)' data-ssid='{V}'>{v}</a>{qi}{qp}</div>";		 // {q} = HTTP_ITEM_QI, {r} = HTTP_ITEM_QP
// const char HTTP_ITEM[]            PROGMEM = "<div><a href='#p' onclick='c(this)'>{v}</a> {R} {r}% {q} {e}</div>"; // test all tokens

const char HTTP_FORM_START[] PROGMEM = "<form method='POST' action='{v}'>";
const char HTTP_FORM_WIFI[] PROGMEM = "<label for='s'>Rede WiFi</label><input id='s' name='s' maxlength='32' autocorrect='off' autocapitalize='none' placeholder='{v}'><br/><label for='p'>Senha da Rede WiFi</label><input id='p' name='p' maxlength='64' type='password' placeholder='{p}'><input type='checkbox' id='showpass' onclick='f()'> <label for='showpass'>Mostrar Senha</label><br/>";
const char HTTP_FORM_WIFI_END[] PROGMEM = "";
const char HTTP_FORM_STATIC_HEAD[] PROGMEM = "<hr><br/>";
const char HTTP_FORM_END[] PROGMEM = "<br/><br/><button type='submit'>Salvar</button></form>";
const char HTTP_FORM_LABEL[] PROGMEM = "<label for='{i}'>{t}</label>";
const char HTTP_FORM_PARAM_HEAD[] PROGMEM = "<hr><br/>";
const char HTTP_FORM_PARAM[] PROGMEM = "<br/><input id='{i}' name='{n}' maxlength='{l}' value='{v}' {c}>\n"; // do not remove newline!

const char HTTP_SCAN_LINK[] PROGMEM = "<br/><form action='/wifi?refresh=1' method='POST'><button name='refresh' value='1'>Recarregar</button></form>";
const char HTTP_SAVED[] PROGMEM = "<div class='msg'>Salvar Credenciais<br/>Tentando conectar o BITSENA à sua rede WiFi.<br />Se houver falha de conexão, conecte ao BITSENA novamente</div>";
const char HTTP_PARAMSAVED[] PROGMEM = "<div class='msg S'>Configurações Salvas<br/></div>";
const char HTTP_END[] PROGMEM = "</div></body></html>";
const char HTTP_ERASEBTN[] PROGMEM = "<br/><form action='/erase' method='get'><button class='D'>Apagar configuração WiFi</button></form>";
const char HTTP_UPDATEBTN[] PROGMEM = "<br/><form action='/update' method='get'><button>Atualizar</button></form>";
const char HTTP_BACKBTN[] PROGMEM = "<hr><br/><form action='/' method='get'><button>Voltar</button></form>";

const char HTTP_STATUS_ON[] PROGMEM = "<div class='msg S'><strong>Conectado à sua rede WiFi</strong> {v}<br/><em><small>no IP {i}</small></em></div>";
const char HTTP_STATUS_OFF[] PROGMEM = "<div class='msg {c}'><strong>Não Conectado</strong> {v}{r}</div>"; // {c=class} {v=ssid} {r=status_off}
const char HTTP_STATUS_OFFPW[] PROGMEM = "<br/>Falha de Autenticação";									   // STATION_WRONG_PASSWORD,  no eps32
const char HTTP_STATUS_OFFNOAP[] PROGMEM = "<br/>Rede WiFi Não Encontrada";								   // WL_NO_SSID_AVAIL
const char HTTP_STATUS_OFFFAIL[] PROGMEM = "<br/>Impossível Conectar";									   // WL_CONNECT_FAILED
const char HTTP_STATUS_NONE[] PROGMEM = "<div class='msg'>Rede WiFi Não Configurada</div>";
const char HTTP_BR[] PROGMEM = "<br/>";

const char HTTP_STYLE[] PROGMEM = "<style>"
								  ".c,body{text-align:center;font-family:verdana}div,input,select{padding:5px;font-size:1em;margin:5px 0;box-sizing:border-box}"
								  "input,button,select,.msg{border-radius:.3rem;width: 100%}input[type=radio],input[type=checkbox]{width:auto}"
								  "button,input[type='button'],input[type='submit']{cursor:pointer;border:0;background-color:#1fa3ec;color:#fff;line-height:2.4rem;font-size:1.2rem;width:100%}"
								  "input[type='file']{border:1px solid #1fa3ec}"
								  ".wrap {text-align:left;display:inline-block;min-width:260px;max-width:500px}"
								  // links
								  "a{color:#000;font-weight:700;text-decoration:none}a:hover{color:#1fa3ec;text-decoration:underline}"
								  // quality icons
								  ".q{height:16px;margin:0;padding:0 5px;text-align:right;min-width:38px;float:right}.q.q-0:after{background-position-x:0}.q.q-1:after{background-position-x:-16px}.q.q-2:after{background-position-x:-32px}.q.q-3:after{background-position-x:-48px}.q.q-4:after{background-position-x:-64px}.q.l:before{background-position-x:-80px;padding-right:5px}.ql .q{float:left}.q:after,.q:before{content:'';width:16px;height:16px;display:inline-block;background-repeat:no-repeat;background-position: 16px 0;"
								  "background-image:url('data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAGAAAAAQCAMAAADeZIrLAAAAJFBMVEX///8AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADHJj5lAAAAC3RSTlMAIjN3iJmqu8zd7vF8pzcAAABsSURBVHja7Y1BCsAwCASNSVo3/v+/BUEiXnIoXkoX5jAQMxTHzK9cVSnvDxwD8bFx8PhZ9q8FmghXBhqA1faxk92PsxvRc2CCCFdhQCbRkLoAQ3q/wWUBqG35ZxtVzW4Ed6LngPyBU2CobdIDQ5oPWI5nCUwAAAAASUVORK5CYII=');}"
								  // icons @2x media query (32px rescaled)
								  "@media (-webkit-min-device-pixel-ratio: 2),(min-resolution: 192dpi){.q:before,.q:after {"
								  "background-image:url('data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAALwAAAAgCAMAAACfM+KhAAAALVBMVEX///8AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADAOrOgAAAADnRSTlMAESIzRGZ3iJmqu8zd7gKjCLQAAACmSURBVHgB7dDBCoMwEEXRmKlVY3L//3NLhyzqIqSUggy8uxnhCR5Mo8xLt+14aZ7wwgsvvPA/ofv9+44334UXXngvb6XsFhO/VoC2RsSv9J7x8BnYLW+AjT56ud/uePMdb7IP8Bsc/e7h8Cfk912ghsNXWPpDC4hvN+D1560A1QPORyh84VKLjjdvfPFm++i9EWq0348XXnjhhT+4dIbCW+WjZim9AKk4UZMnnCEuAAAAAElFTkSuQmCC');"
								  "background-size: 95px 16px;}}"
								  // msg callouts
								  ".msg{padding:20px;margin:20px 0;border:1px solid #eee;border-left-width:5px;border-left-color:#777}.msg h4{margin-top:0;margin-bottom:5px}.msg.P{border-left-color:#1fa3ec}.msg.P h4{color:#1fa3ec}.msg.D{border-left-color:#dc3630}.msg.D h4{color:#dc3630}.msg.S{border-left-color: #5cb85c}.msg.S h4{color: #5cb85c}"
								  // lists
								  "dt{font-weight:bold}dd{margin:0;padding:0 0 0.5em 0;min-height:12px}"
								  "td{vertical-align: top;}"
								  ".h{display:none}"
								  "button{transition: 0s opacity;transition-delay: 3s;transition-duration: 0s;cursor: pointer}"
								  "button.D{background-color:#dc3630}"
								  "button:active{opacity:50% !important;cursor:wait;transition-delay: 0s}"
								  // invert
								  "body.invert{background-color:#060606;}"
								  "body.invert,body.invert a,body.invert h1 {color:#fff;}"
								  "body.invert .msg{color:#fff;background-color:#282828;border-top:1px solid #555;border-right:1px solid #555;border-bottom:1px solid #555;}"
								  "body.invert .q[role=img]{-webkit-filter:invert(1);filter:invert(1);}"
								  ":disabled {opacity: 0.5;}"
								  "</style>";

#ifndef WM_NOHELP
const char HTTP_HELP[] PROGMEM =
	"<br/><h3>Páginas Disponíveis</h3><hr>"
	"<table class='table'>"
	"<thead><tr><th>Página</th><th>Função</th></tr></thead><tbody>"
	"<tr><td><a href='/'>/</a></td>"
	"<td>Menu Principal</td></tr>"
	"<tr><td><a href='/wifi'>/wifi</a></td>"
	"<td>Mostrar os resultados da varredura de WiFi e entrar na configuração de WiFi.(/0wifi noscan)</td></tr>"
	"<tr><td><a href='/wifisave'>/wifisave</a></td>"
	"<td>Salva as informações de configuração do WiFi e configura o dispositivo. Necessita de variáveis fornecidas.</td></tr>"
	"<tr><td><a href='/param'>/param</a></td>"
	"<td>Página de Parâmetros</td></tr>"
	"<tr><td><a href='/info'>/info</a></td>"
	"<td>Página de Informações</td></tr>"
	"<tr><td><a href='/u'>/u</a></td>"
	"<td>OTA Atualização</td></tr>"
	"<tr><td><a href='/close'>/close</a></td>"
	"<td>Feche o pop-up do captiveportal, o portal de configuração permanecerá ativo</td></tr>"
	"<tr><td>/exit</td>"
	"<td>Sair do Portal de Configuração, o Portal de Configuração será fechado</td></tr>"
	"<tr><td>/restart</td>"
	"<td>Reiniciar o BITSENA</td></tr>"
	"<tr><td>/erase</td>"
	"<td>Apague a configuração do WiFi e reinicie o dispositivo. O dispositivo não se reconectará a uma rede até que novos dados de configuração do WiFi sejam inseridos.</td></tr>"
	"</table>"
	"<p/>Site <a href='https://bitsena.com.br'>BITSENA.COM.BR</a>.";
#else
const char HTTP_HELP[] PROGMEM = "";
#endif

const char HTTP_UPDATE[] PROGMEM = "Carregar novo firmware<br/><form method='POST' action='u' enctype='multipart/form-data' onchange=\"(function(el){document.getElementById('uploadbin').style.display = el.value=='' ? 'none' : 'initial';})(this)\"><input type='file' name='update' accept='.bin,application/octet-stream'><button id='uploadbin' type='submit' class='h D'>Update</button></form><small><a href='http://192.168.4.1/update' target='_blank'>* Essa atualização só pode ser realizada via navegador, abra o endereço http://192.168.4.1</a></small>";
const char HTTP_UPDATE_FAIL[] PROGMEM = "<div class='msg D'><strong>Falha de atualização!</strong><Br/>Reinicie o BITSENA e tente novamente</div>";
const char HTTP_UPDATE_SUCCESS[] PROGMEM = "<div class='msg S'><strong>BITSENA Atualizado.  </strong> <br/> BITSENA reiniciando...</div>";

#ifdef WM_JSTEST
const char HTTP_JS[] PROGMEM =
	"<script>function postAjax(url, data, success) {"
	"    var params = typeof data == 'string' ? data : Object.keys(data).map("
	"            function(k){ return encodeURIComponent(k) + '=' + encodeURIComponent(data[k]) }"
	"        ).join('&');"
	"    var xhr = window.XMLHttpRequest ? new XMLHttpRequest() : new ActiveXObject(\"Microsoft.XMLHTTP\");"
	"    xhr.open('POST', url);"
	"    xhr.onreadystatechange = function() {"
	"        if (xhr.readyState>3 && xhr.status==200) { success(xhr.responseText); }"
	"    };"
	"    xhr.setRequestHeader('X-Requested-With', 'XMLHttpRequest');"
	"    xhr.setRequestHeader('Content-Type', 'application/x-www-form-urlencoded');"
	"    xhr.send(params);"
	"    return xhr;}"
	"postAjax('/status', 'p1=1&p2=Hello+World', function(data){ console.log(data); });"
	"postAjax('/status', { p1: 1, p2: 'Hello World' }, function(data){ console.log(data); });"
	"</script>";
#endif

// Info html
// @todo remove html elements from progmem, repetetive strings
#ifdef ESP32
const char HTTP_INFO_esphead[] PROGMEM = "<h3>BITSENA</h3><hr><dl>";
const char HTTP_INFO_chiprev[] PROGMEM = "<dt>ASIC Revisão</dt><dd>{1}</dd>";
const char HTTP_INFO_lastreset[] PROGMEM = "<dt>Última inicialização</dt><dd>CPU0: {1}<br/>CPU1: {2}</dd>";
const char HTTP_INFO_aphost[] PROGMEM = "<dt>Marca da Placa</dt><dd>{1}</dd>";
const char HTTP_INFO_psrsize[] PROGMEM = "<dt>PSRAM</dt><dd>{1} bytes</dd>";
const char HTTP_INFO_temp[] PROGMEM = "<dt>Temperatura</dt><dd>{1} C&deg; / {2} F&deg;</dd>";
const char HTTP_INFO_hall[] PROGMEM = "<dt>Hall</dt><dd>{1}</dd>";
#else
const char HTTP_INFO_esphead[] PROGMEM = "<h3>BITSENA</h3><hr><dl>";
const char HTTP_INFO_fchipid[] PROGMEM = "<dt>ASIC ID</dt><dd>{1}</dd>";
const char HTTP_INFO_corever[] PROGMEM = "<dt>Núcleo versão</dt><dd>{1}</dd>";
const char HTTP_INFO_bootver[] PROGMEM = "<dt>Boot versão</dt><dd>{1}</dd>";
const char HTTP_INFO_lastreset[] PROGMEM = "<dt>Último reset</dt><dd>{1}</dd>";
const char HTTP_INFO_flashsize[] PROGMEM = "<dt>Firmware</dt><dd>{1} bytes</dd>";
#endif

const char HTTP_INFO_memsmeter[] PROGMEM = "<br/><progress value='{1}' max='{2}'></progress></dd>";
const char HTTP_INFO_memsketch[] PROGMEM = "<dt>Memória - Utilizada</dt><dd>Usado / Total bytes<br/>{1} / {2}";
const char HTTP_INFO_freeheap[] PROGMEM = "<dt>Memória - Livre</dt><dd>{1} bytes disponíveis</dd>";
const char HTTP_INFO_wifihead[] PROGMEM = "<br/><h3>WiFi</h3><hr>";
const char HTTP_INFO_uptime[] PROGMEM = "<dt>Ligado há</dt><dd>{1} mins {2} segs</dd>";
const char HTTP_INFO_chipid[] PROGMEM = "<dt>ASIC ID</dt><dd>{1}</dd>";
const char HTTP_INFO_idesize[] PROGMEM = "<dt>Firmware</dt><dd>{1} bytes</dd>";
const char HTTP_INFO_sdkver[] PROGMEM = "<dt>SDK versão</dt><dd>{1}</dd>";
const char HTTP_INFO_cpufreq[] PROGMEM = "<dt>CPU</dt><dd>{1}MHz</dd>";
const char HTTP_INFO_apip[] PROGMEM = "<dt>BITSENA IP</dt><dd>{1}</dd>";
const char HTTP_INFO_apmac[] PROGMEM = "<dt>BITSENA MAC</dt><dd>{1}</dd>";
const char HTTP_INFO_apssid[] PROGMEM = "<dt>BITSENA SSID</dt><dd>{1}</dd>";
const char HTTP_INFO_apbssid[] PROGMEM = "<dt>Nome da Rede</dt><dd>{1}</dd>";
const char HTTP_INFO_stassid[] PROGMEM = "<dt>Rede WiFi</dt><dd>{1}</dd>";
const char HTTP_INFO_staip[] PROGMEM = "<dt>IP</dt><dd>{1}</dd>";
const char HTTP_INFO_stagw[] PROGMEM = "<dt>Gateway</dt><dd>{1}</dd>";
const char HTTP_INFO_stasub[] PROGMEM = "<dt>Subrede</dt><dd>{1}</dd>";
const char HTTP_INFO_dnss[] PROGMEM = "<dt>DNS</dt><dd>{1}</dd>";
const char HTTP_INFO_host[] PROGMEM = "<dt>Nome na rede</dt><dd>{1}</dd>";
const char HTTP_INFO_stamac[] PROGMEM = "<dt>Endereço MAC</dt><dd>{1}</dd>";
const char HTTP_INFO_conx[] PROGMEM = "<dt>CONECTADO</dt><dd>{1}</dd>";
const char HTTP_INFO_autoconx[] PROGMEM = "<dt>AUTOCONEXÃO</dt><dd>{1}</dd>";

const char HTTP_INFO_aboutver[] PROGMEM = "<dt>BITSENA WIFI</dt><dd>{1}</dd>";
const char HTTP_INFO_aboutarduino[] PROGMEM = "<dt>FL-BITCOIN</dt><dd>{1}</dd>";
const char HTTP_INFO_aboutsdk[] PROGMEM = "<dt>ESP-SDK/IDF</dt><dd>{1}</dd>";
const char HTTP_INFO_aboutdate[] PROGMEM = "<dt>CONTRUÍDO EM</dt><dd>{1}</dd>";

const char S_brand[] PROGMEM = "BITSENA";
const char S_debugPrefix[] PROGMEM = "*wm:";
const char S_y[] PROGMEM = "Sim";
const char S_n[] PROGMEM = "Não";
const char S_enable[] PROGMEM = "Ativar";
const char S_disable[] PROGMEM = "Desativar";
const char S_GET[] PROGMEM = "GET";
const char S_POST[] PROGMEM = "POST";
const char S_NA[] PROGMEM = "Desconhecido";
const char S_passph[] PROGMEM = "********";
const char S_titlewifisaved[] PROGMEM = "Credenciais Salvas";
const char S_titlewifisettings[] PROGMEM = "Configurações Salvas";
const char S_titlewifi[] PROGMEM = "ASIC Configuração";
const char S_titleinfo[] PROGMEM = "Informações";
const char S_titleparam[] PROGMEM = "Configurações";
const char S_titleparamsaved[] PROGMEM = "Configurações Salvas";
const char S_titleexit[] PROGMEM = "Sair";
const char S_titlereset[] PROGMEM = "Reiniciar";
const char S_titleerase[] PROGMEM = "Apagar";
const char S_titleclose[] PROGMEM = "Fechar";
const char S_options[] PROGMEM = "options";
const char S_nonetworks[] PROGMEM = "Nenhuma rede WiFi encontrada. Recarregue e tente novamente";
const char S_staticip[] PROGMEM = "IP Estático";
const char S_staticgw[] PROGMEM = "Gateway";
const char S_staticdns[] PROGMEM = "DNS";
const char S_subnet[] PROGMEM = "Subnet";
const char S_exiting[] PROGMEM = "Saindo";
const char S_resetting[] PROGMEM = "BITSENA vai reiniciar em alguns segundos.";
const char S_closing[] PROGMEM = "Você pode fechar esta página, o BITSENA continuará em execução";
const char S_error[] PROGMEM = "Ocorreu um erro";
const char S_notfound[] PROGMEM = "Arquivo não encontrado\n\n";
const char S_uri[] PROGMEM = "URI: ";
const char S_method[] PROGMEM = "\nMethod: ";
const char S_args[] PROGMEM = "\nArguments: ";
const char S_parampre[] PROGMEM = "param_";

// debug strings
const char D_HR[] PROGMEM = "--------------------";

// softap ssid default prefix
#ifdef ESP8266
const char S_ssidpre[] PROGMEM = "ESP";
#elif defined(ESP32)
const char S_ssidpre[] PROGMEM = "ESP32";
#else
const char S_ssidpre[] PROGMEM = "WM";
#endif

// END WIFI_MANAGER_OVERRIDE_STRINGS
#endif

#endif
