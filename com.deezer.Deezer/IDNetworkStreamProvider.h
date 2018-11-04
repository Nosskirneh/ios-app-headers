//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDNetServiceBrowserDelegate-Protocol.h"
#import "IDStreamProvider-Protocol.h"

@class IDNetServiceBrowser, NSInputStream, NSOutputStream, NSString;
@protocol IDStreamProviderDelegate;

@interface IDNetworkStreamProvider : NSObject <IDNetServiceBrowserDelegate, IDStreamProvider>
{
    id <IDStreamProviderDelegate> _delegate;
    IDNetServiceBrowser *_netServiceBrowser;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
}

@property(retain) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(retain) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property(readonly) IDNetServiceBrowser *netServiceBrowser; // @synthesize netServiceBrowser=_netServiceBrowser;
@property __weak id <IDStreamProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)netServiceBrowser:(id)arg1 resolutionDidFailWithError:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didSelectService:(id)arg2;
- (void)reset;
- (void)stop;
- (void)start;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

