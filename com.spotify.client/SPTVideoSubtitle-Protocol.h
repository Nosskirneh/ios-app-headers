//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;
@protocol SPTVideoSubtitle;

@protocol SPTVideoSubtitle <NSObject>
- (unsigned long long)compareScore:(id <SPTVideoSubtitle>)arg1;
- (_Bool)isOffSubtitle;
- (_Bool)isClosedCaption;
- (NSString *)localisedName;
- (NSString *)language;
- (NSString *)langtag;
- (NSArray *)components;
@end

