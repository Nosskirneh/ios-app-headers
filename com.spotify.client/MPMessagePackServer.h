//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MPMessagePackClientDelegate-Protocol.h"

@class MPMessagePackClient, NSString;

@interface MPMessagePackServer : NSObject <MPMessagePackClientDelegate>
{
    CDUnknownBlockType _requestHandler;
    CDUnknownBlockType _notificationHandler;
    long long _options;
    struct __CFSocket *_socket;
    MPMessagePackClient *_client;
}

@property(retain) MPMessagePackClient *client; // @synthesize client=_client;
@property struct __CFSocket *socket; // @synthesize socket=_socket;
@property long long options; // @synthesize options=_options;
@property(copy, nonatomic) CDUnknownBlockType notificationHandler; // @synthesize notificationHandler=_notificationHandler;
@property(copy, nonatomic) CDUnknownBlockType requestHandler; // @synthesize requestHandler=_requestHandler;
- (void).cxx_destruct;
- (void)client:(id)arg1 didChangeStatus:(long long)arg2;
- (void)client:(id)arg1 didReceiveNotificationWithMethod:(id)arg2 params:(id)arg3;
- (void)client:(id)arg1 didError:(id)arg2 fatal:(_Bool)arg3;
- (void)close;
- (_Bool)openWithPort:(unsigned short)arg1 error:(id *)arg2;
- (void)connectionWithInputStream:(id)arg1 outputStream:(id)arg2;
- (id)initWithOptions:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

