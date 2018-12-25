//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVContentKeySessionDelegate-Protocol.h"
#import "MLFairPlayKeySessionProtocol-Protocol.h"

@class AVContentKeySession, GIMMe, NSString;
@protocol MLFairPlayContentKeySessionDelegate, OS_dispatch_queue;

@interface MLFairPlayContentKeySession : NSObject <AVContentKeySessionDelegate, MLFairPlayKeySessionProtocol>
{
    NSObject<OS_dispatch_queue> *_queue;
    AVContentKeySession *_keySession;
    GIMMe *_gimme;
    id <MLFairPlayContentKeySessionDelegate> _delegate;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <MLFairPlayContentKeySessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)syncMakeRequestWithIdentifier:(id)arg1;
- (void)didReceiveLicenseResponse:(id)arg1 error:(id)arg2 forKeyRequest:(id)arg3;
- (void)contentKeySession:(id)arg1 didProvideContentKeyRequest:(id)arg2;
- (void)setFairPlayAsset:(id)arg1;
- (void)makeRequestWithIdentifier:(id)arg1;
- (void)terminate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
