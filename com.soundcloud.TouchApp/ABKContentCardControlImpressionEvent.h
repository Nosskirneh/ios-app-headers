//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ABKEvent.h"

@class NSString;

@interface ABKContentCardControlImpressionEvent : ABKEvent
{
    NSString *_cardControlImpressionCardId;
}

@property(copy) NSString *cardControlImpressionCardId; // @synthesize cardControlImpressionCardId=_cardControlImpressionCardId;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)getDataAsJson;
- (id)getType;
- (id)initWithContentCardId:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

