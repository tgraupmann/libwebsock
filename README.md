# libwebsock

Easy to use C library for websockets

This library allows for quick and easy development of applications that use
the websocket protocol, without the need to focus on websocket protocol
specifics nor even socket specifics. It handles the sockets and the protocol
for you, allowing you to focus on the core logic of your application.

For those who wish to use their own sockets, the library is capable of being
bound to existing fd's, allowing you to create your own socket logic and simply
trigger libwebsock events on them. Support for tying your own libevent bases in to 
libwebsocket is also being worked on. 

Currently, libwebsocket has the following features:

* Event Callback Based
* Support for SSL
* Uses [libevent][2] for maximum portability (tested on Linux, FreeBSD and Mac OS)
* Supports IPv4 and IPv6
* Passes the Autobahn Test suite
* Can handle the entire socket connection for you
* Can be bound to existing file descriptors allowing you to use your own socket code

At the moment, it only supports sending unfragmented text frames using the default
libwebsock_send_text() function. It is currently hardcoded to always send the FIN
bit. Support is being integrated to allow fragmented messages to be sent, as detailed
below.

Coming Soon:

* Ability to tie in to existing libevent bases
* Ability to send fragmented messages
* Streaming functionality (for video, audio and file transfers)

This is a continuation of Payden Kyle Sutherlands original libwebsocket implementation.

Payden Sutherland passed away on September 24, 2014, mid-development of this library.
The library is almost complete, and incredibly powerful - not to mention easy to use. I
felt that picking it up and getting it finished was the right thing to do. All initial
credit belongs to him for his hard work and time put in to the project.
