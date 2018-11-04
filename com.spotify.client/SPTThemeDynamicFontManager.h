//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable, NSString;

@interface SPTThemeDynamicFontManager : NSObject
{
    NSHashTable *_themes;
    NSString *_currentContentSizeCategory;
}

+ (id)accessibilitySizeFlagForContentSizeCategory:(id)arg1;
+ (id)sizeFlagForContentSizeCategory:(id)arg1;
@property(retain, nonatomic) NSString *currentContentSizeCategory; // @synthesize currentContentSizeCategory=_currentContentSizeCategory;
@property(retain, nonatomic) NSHashTable *themes; // @synthesize themes=_themes;
- (void).cxx_destruct;
- (void)updateTheme:(id)arg1 previousContentSizeCategory:(id)arg2 currentContentSizeCategory:(id)arg3;
- (void)contentSizeCategoryDidChange;
- (void)removeTheme:(id)arg1;
- (void)addTheme:(id)arg1;
- (void)dealloc;
- (id)init;

@end

