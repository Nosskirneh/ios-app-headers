//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ABKContentCard.h"

#import "NSCoding-Protocol.h"

@class NSString;

@interface ABKBannerContentCard : ABKContentCard <NSCoding>
{
    float _imageAspectRatio;
    NSString *_image;
}

@property float imageAspectRatio; // @synthesize imageAspectRatio=_imageAspectRatio;
@property(copy) NSString *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)proxyForJson;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setNilValueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

