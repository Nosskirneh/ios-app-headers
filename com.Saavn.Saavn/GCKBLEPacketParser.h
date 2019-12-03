//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface GCKBLEPacketParser : NSObject
{
    _Bool _hasToken;
    _Bool _hasBSSID;
    NSString *_BSSID;
    NSData *_token;
    double _tokenExpirationTime;
}

@property(readonly) _Bool hasBSSID; // @synthesize hasBSSID=_hasBSSID;
@property(readonly) _Bool hasToken; // @synthesize hasToken=_hasToken;
@property(readonly) double tokenExpirationTime; // @synthesize tokenExpirationTime=_tokenExpirationTime;
@property(readonly) NSData *token; // @synthesize token=_token;
@property(readonly) NSString *BSSID; // @synthesize BSSID=_BSSID;
- (void).cxx_destruct;
- (id)initWithServiceData:(id)arg1 manufacturerData:(id)arg2;
- (id)init;

@end
