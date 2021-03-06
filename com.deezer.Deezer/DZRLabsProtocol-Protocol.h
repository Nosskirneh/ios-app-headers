//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol DZRLabsProtocol <NSObject>
+ (_Bool)isVisible;
+ (long long)rank;
+ (NSString *)featureId;
+ (id)feature;
@property(retain, nonatomic) NSString *selectedValue;
@property(nonatomic, getter=isEnabled) _Bool enable;
- (NSString *)labUserDefaultKey;
- (NSArray *)values;
- (NSString *)description;
- (NSString *)authors;
- (NSString *)title;
@end

