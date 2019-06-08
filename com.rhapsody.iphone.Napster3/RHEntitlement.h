//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDate, NSNumber, NSString;

@interface RHEntitlement : NSObject <NSCoding>
{
    long long _code;
    NSString *_value;
    NSString *_currentValue;
    NSDate *_nextResetDate;
    NSNumber *_numberOfFavoritesCanPlay;
}

+ (id)parseJson:(id)arg1;
@property(readonly, nonatomic) NSNumber *numberOfFavoritesCanPlay; // @synthesize numberOfFavoritesCanPlay=_numberOfFavoritesCanPlay;
@property(readonly, nonatomic) NSDate *nextResetDate; // @synthesize nextResetDate=_nextResetDate;
@property(readonly, nonatomic) NSString *currentValue; // @synthesize currentValue=_currentValue;
@property(readonly, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, nonatomic) long long code; // @synthesize code=_code;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

