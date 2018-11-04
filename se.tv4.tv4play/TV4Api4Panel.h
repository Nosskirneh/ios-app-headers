//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, TV4Api4PanelLink;

@interface TV4Api4Panel : NSObject
{
    _Bool _adImagePremium;
    NSString *_type;
    NSString *_name;
    NSString *_visibility;
    NSString *_platform;
    NSString *_adImage;
    NSString *_excludeSumoAnnotags;
    NSString *_adImageLink;
    NSString *_excludedPrograms;
    TV4Api4PanelLink *_panelLink;
    NSArray *_programTags;
    NSArray *_teasers;
}

+ (id)panelWithDictionary:(id)arg1;
@property(copy, nonatomic) NSArray *teasers; // @synthesize teasers=_teasers;
@property(retain, nonatomic) NSArray *programTags; // @synthesize programTags=_programTags;
@property(retain, nonatomic) TV4Api4PanelLink *panelLink; // @synthesize panelLink=_panelLink;
@property(copy, nonatomic) NSString *excludedPrograms; // @synthesize excludedPrograms=_excludedPrograms;
@property(copy, nonatomic) NSString *adImageLink; // @synthesize adImageLink=_adImageLink;
@property(nonatomic) _Bool adImagePremium; // @synthesize adImagePremium=_adImagePremium;
@property(copy, nonatomic) NSString *excludeSumoAnnotags; // @synthesize excludeSumoAnnotags=_excludeSumoAnnotags;
@property(copy, nonatomic) NSString *adImage; // @synthesize adImage=_adImage;
@property(copy, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property(copy, nonatomic) NSString *visibility; // @synthesize visibility=_visibility;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

