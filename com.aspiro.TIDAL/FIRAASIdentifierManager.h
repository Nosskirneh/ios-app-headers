//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ASIdentifierManager, NSString;

@interface FIRAASIdentifierManager : NSObject
{
    ASIdentifierManager *_sharedIdentifierManager;
}

+ (id)sharedManager;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)advertisingIdentifier;
- (_Bool)isAdvertisingTrackingEnabled;
@property(readonly, nonatomic) _Bool limitedAdTracking;
@property(readonly, nonatomic) _Bool hasLimitedAdTracking;
@property(readonly, nonatomic) NSString *advertisingIdentifierString;
- (id)initWithIdentifierManager:(id)arg1;

@end

