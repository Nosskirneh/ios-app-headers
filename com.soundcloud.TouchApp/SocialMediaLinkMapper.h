//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface SocialMediaLinkMapper : NSObject
{
    NSDictionary *_socialMediaIcons;
    NSDictionary *_displayTitles;
}

+ (id)setUpIcons;
+ (id)icons;
@property(retain, nonatomic) NSDictionary *displayTitles; // @synthesize displayTitles=_displayTitles;
@property(retain, nonatomic) NSDictionary *socialMediaIcons; // @synthesize socialMediaIcons=_socialMediaIcons;
- (void).cxx_destruct;
- (id)setUpDisplayTitles;
- (id)hostFromURLString:(id)arg1;
- (id)displayTitleForNetwork:(id)arg1;
- (id)imageForNetwork:(id)arg1;
- (id)displayTitleFromSocialMediaLink:(id)arg1;
- (id)imageFromSocialMediaLink:(id)arg1;
- (id)init;

@end

