//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SPTVideoSubtitle;

@protocol SPTVideoSubtitle <NSObject>
@property(readonly, nonatomic, getter=isOffSubtitle) _Bool offSubtitle;
@property(readonly, nonatomic, getter=isClosedCaption) _Bool closedCaption;
@property(readonly, nonatomic) NSString *locale;
@property(readonly, nonatomic) NSString *language;
@property(readonly, nonatomic) NSString *languageTag;
- (unsigned long long)compareScore:(id <SPTVideoSubtitle>)arg1;
@end

