//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANGConsumable.h"

@class NSString;

@interface ANGGift : ANGConsumable
{
    NSString *_giftRecepientName;
    long long _order;
}

+ (id)primaryKey;
@property long long order; // @synthesize order=_order;
@property(retain, nonatomic) NSString *giftRecepientName; // @synthesize giftRecepientName=_giftRecepientName;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

