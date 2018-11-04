//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BTOptions : NSObject
{
    _Bool _userTracking;
    _Bool _localMode;
    _Bool _debugLogging;
    long long _protocol;
    NSString *_trackingKey;
    NSString *_trackingHost;
    NSString *_profilesHost;
}

+ (id)optionsWithTrackingKey:(id)arg1;
@property(retain) NSString *profilesHost; // @synthesize profilesHost=_profilesHost;
@property(retain) NSString *trackingHost; // @synthesize trackingHost=_trackingHost;
@property(retain) NSString *trackingKey; // @synthesize trackingKey=_trackingKey;
@property long long protocol; // @synthesize protocol=_protocol;
@property _Bool debugLogging; // @synthesize debugLogging=_debugLogging;
@property _Bool localMode; // @synthesize localMode=_localMode;
@property _Bool userTracking; // @synthesize userTracking=_userTracking;
- (void).cxx_destruct;
- (id)protocolString;
- (id)profileTransport;
- (id)profileTransmitter;
- (id)transportDelegate;
- (id)transport;
- (id)logger;
- (id)transmitter;
- (id)initWithTrackingKey:(id)arg1;

@end

