//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;
@protocol BMSubtitle;

@protocol BMSubtitle <NSObject>
@property(readonly, nonatomic, getter=isClosedCaption) _Bool closedCaption;
@property(readonly, nonatomic) NSString *locale;
@property(readonly, nonatomic) NSString *language;
@property(readonly, nonatomic) NSString *languageTag;
- (id <BMSubtitle>)bestMatch:(NSArray *)arg1;
@end

