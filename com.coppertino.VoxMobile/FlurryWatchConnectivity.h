//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FlurryWatchConnectivityProxy, WCSession;
@protocol FlurryWatchConnectivityDelegate;

@interface FlurryWatchConnectivity : NSObject
{
    _Bool _disabled;
    _Bool _disableTransferInfo;
    _Bool _kvoSetup;
    id <FlurryWatchConnectivityDelegate> _delegate;
    Class _wcsession;
    FlurryWatchConnectivityProxy *_connectivityProxy;
    WCSession *_session;
}

+ (id)defaultConnectivty;
@property(nonatomic) _Bool kvoSetup; // @synthesize kvoSetup=_kvoSetup;
@property(nonatomic) _Bool disableTransferInfo; // @synthesize disableTransferInfo=_disableTransferInfo;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) __weak WCSession *session; // @synthesize session=_session;
@property(retain) FlurryWatchConnectivityProxy *connectivityProxy; // @synthesize connectivityProxy=_connectivityProxy;
@property(nonatomic) Class wcsession; // @synthesize wcsession=_wcsession;
@property(nonatomic) __weak id <FlurryWatchConnectivityDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)removeKVO;
- (void)setupKVO;
- (void)checkNewDelegate:(id)arg1;
- (void)setSessionDelegate:(id)arg1;
- (void)restoreCachedSessionDelegate;
- (void)cacheAndReplaceSessionDelegate;
- (void)activateSession;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)disableTransferFlurryInfo;
- (void)disableWatchConnectivity;
- (void)transferUserInfo:(id)arg1;
- (void)teardown;
- (void)setup;
- (id)init;

@end

