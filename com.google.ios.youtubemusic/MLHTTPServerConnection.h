//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTTPConnection.h"

@class MLHTTPServer;

@interface MLHTTPServerConnection : HTTPConnection
{
    MLHTTPServer *_server;
}

- (void).cxx_destruct;
- (id)httpResponseForMethod:(id)arg1 URI:(id)arg2;
- (_Bool)supportsMethod:(id)arg1 atPath:(id)arg2;
- (id)initWithAsyncSocket:(id)arg1 configuration:(id)arg2;

@end
