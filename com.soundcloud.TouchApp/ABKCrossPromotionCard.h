//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ABKCard.h"

#import "NSCoding-Protocol.h"

@class NSString;

@interface ABKCrossPromotionCard : ABKCard <NSCoding>
{
    _Bool _universal;
    float _rating;
    float _price;
    int _reviews;
    NSString *_mediaType;
    NSString *_title;
    NSString *_subtitle;
    NSString *_image;
    NSString *_displayPrice;
    long long _iTunesId;
    NSString *_caption;
}

+ (_Bool)isValid:(id)arg1;
@property _Bool universal; // @synthesize universal=_universal;
@property(copy) NSString *caption; // @synthesize caption=_caption;
@property(nonatomic) int reviews; // @synthesize reviews=_reviews;
@property(nonatomic) float price; // @synthesize price=_price;
@property(nonatomic) float rating; // @synthesize rating=_rating;
@property(nonatomic) long long iTunesId; // @synthesize iTunesId=_iTunesId;
@property(copy) NSString *displayPrice; // @synthesize displayPrice=_displayPrice;
@property(copy) NSString *image; // @synthesize image=_image;
@property(copy) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy) NSString *title; // @synthesize title=_title;
@property(copy) NSString *mediaType; // @synthesize mediaType=_mediaType;
- (void).cxx_destruct;
- (id)proxyForJson;
- (void)setNilValueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (_Bool)isApp;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

