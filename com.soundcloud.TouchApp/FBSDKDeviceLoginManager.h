//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSNetServiceDelegate-Protocol.h"

@class FBSDKDeviceLoginCodeInfo, NSArray, NSNetService, NSString, NSURL;
@protocol FBSDKDeviceLoginManagerDelegate;

@interface FBSDKDeviceLoginManager : NSObject <NSNetServiceDelegate>
{
    FBSDKDeviceLoginCodeInfo *_codeInfo;
    _Bool _isCancelled;
    NSNetService *_loginAdvertisementService;
    _Bool _isSmartLoginEnabled;
    id <FBSDKDeviceLoginManagerDelegate> _delegate;
    NSArray *_permissions;
    NSURL *_redirectURL;
}

+ (void)initialize;
@property(copy, nonatomic) NSURL *redirectURL; // @synthesize redirectURL=_redirectURL;
@property(readonly, copy, nonatomic) NSArray *permissions; // @synthesize permissions=_permissions;
@property(nonatomic) __weak id <FBSDKDeviceLoginManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)netService:(id)arg1 didNotPublish:(id)arg2;
- (void)_schedulePoll:(unsigned long long)arg1;
- (void)_processError:(id)arg1;
- (void)_notifyToken:(id)arg1;
- (void)_notifyError:(id)arg1;
- (void)cancel;
- (void)start;
- (id)initWithPermissions:(id)arg1 enableSmartLogin:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

