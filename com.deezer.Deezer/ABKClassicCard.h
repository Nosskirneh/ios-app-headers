//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ABKCard.h"

#import "NSCoding-Protocol.h"

@class NSString;

@interface ABKClassicCard : ABKCard <NSCoding>
{
    NSString *_image;
    NSString *_cardDescription;
    NSString *_title;
    NSString *_domain;
}

+ (_Bool)isValid:(id)arg1;
@property(copy) NSString *domain; // @synthesize domain=_domain;
@property(copy) NSString *title; // @synthesize title=_title;
@property(copy) NSString *cardDescription; // @synthesize cardDescription=_cardDescription;
@property(copy) NSString *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)proxyForJson;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

