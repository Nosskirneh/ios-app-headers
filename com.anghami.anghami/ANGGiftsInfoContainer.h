//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RLMObject.h"

@class NSArray, NSString;

@interface ANGGiftsInfoContainer : RLMObject
{
    NSString *_title;
    NSString *_subtitle;
    NSString *_seeMoreText;
    NSString *_seeMoreLink;
    NSString *_image;
    NSString *_backgroundImage;
    NSString *_termsConditionsDeeplink;
    NSString *_termsConditionsText;
    NSString *_buyTitle;
    NSString *_gifteeText;
    NSString *_buyButtonText;
    NSString *_buyBillText;
    NSArray *_giftsArray;
}

+ (id)currentContainer;
+ (id)ignoredProperties;
+ (id)allGiftsAppleIds;
+ (void)updateGiftsContainer:(id)arg1;
@property(retain, nonatomic) NSArray *giftsArray; // @synthesize giftsArray=_giftsArray;
@property(retain, nonatomic) NSString *buyBillText; // @synthesize buyBillText=_buyBillText;
@property(retain, nonatomic) NSString *buyButtonText; // @synthesize buyButtonText=_buyButtonText;
@property(retain, nonatomic) NSString *gifteeText; // @synthesize gifteeText=_gifteeText;
@property(retain, nonatomic) NSString *buyTitle; // @synthesize buyTitle=_buyTitle;
@property(retain, nonatomic) NSString *termsConditionsText; // @synthesize termsConditionsText=_termsConditionsText;
@property(retain, nonatomic) NSString *termsConditionsDeeplink; // @synthesize termsConditionsDeeplink=_termsConditionsDeeplink;
@property(retain, nonatomic) NSString *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) NSString *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *seeMoreLink; // @synthesize seeMoreLink=_seeMoreLink;
@property(retain, nonatomic) NSString *seeMoreText; // @synthesize seeMoreText=_seeMoreText;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)allGiftsAppleIds;
- (id)allGifts;
- (id)initWithDictionary:(id)arg1;

@end

