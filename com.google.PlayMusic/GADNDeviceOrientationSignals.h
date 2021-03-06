//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADNSignal-Protocol.h"

@class NSString;

@interface GADNDeviceOrientationSignals : NSObject <GADNSignal>
{
    long long _statusBarOrientation;
    struct CGSize _standardizedOrientedKeyWindowSize;
    NSString *_supportedInterfaceOrientationsForKeyWindow;
    NSString *_mainWindowSupportedInterfaceOrientations;
    struct CGRect _standardizedMainScreenPortraitBounds;
}

+ (id)signalSource;
@property(readonly, nonatomic) struct CGSize standardizedOrientedKeyWindowSize; // @synthesize standardizedOrientedKeyWindowSize=_standardizedOrientedKeyWindowSize;
- (void).cxx_destruct;
- (void)addSignalEntriesToMutableDictionary:(id)arg1;
@property(readonly, nonatomic) struct CGSize standardizedPortraitKeyWindowSize;
@property(readonly, nonatomic) struct CGRect standardizedOrientedApplicationFrame;
@property(readonly, nonatomic) struct CGRect standardizedOrientedScreenBounds;
@property(readonly, nonatomic) _Bool orientationLandscape;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

