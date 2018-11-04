//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol DZRDynamicPageSectionLayoutConfiguration;

@interface DZRDynamicPageSectionCreator : NSObject
{
    NSString *_pageID;
    NSString *_origin;
    id <DZRDynamicPageSectionLayoutConfiguration> _layoutConfiguration;
}

@property(retain, nonatomic) id <DZRDynamicPageSectionLayoutConfiguration> layoutConfiguration; // @synthesize layoutConfiguration=_layoutConfiguration;
@property(retain, nonatomic) NSString *origin; // @synthesize origin=_origin;
@property(retain, nonatomic) NSString *pageID; // @synthesize pageID=_pageID;
- (void).cxx_destruct;
- (id)sectionIDForSectionIdentifier:(id)arg1 andPosition:(long long)arg2;
- (id)itemIDForNavigationDictionary:(id)arg1 forType:(long long)arg2 inSection:(id)arg3 atIndex:(long long)arg4;
- (id)navigationItemIDForNavigationDictionary:(id)arg1 inSection:(id)arg2 atIndex:(long long)arg3;
- (id)bannerConversionItemFromDictionary:(id)arg1 inSection:(id)arg2 atIndex:(long long)arg3;
- (id)bannerConversionSection;
- (id)bannerConversionSectionFromPageID:(id)arg1 withOrigin:(id)arg2 andLayout:(id)arg3;

@end

