//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, YTMClientSettingsController;

@interface YTMSettingsSectionControllerFactory : NSObject
{
    YTMClientSettingsController *_clientSettingsController;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (id)singleItemControllerWithTitle:(id)arg1 subtitle:(id)arg2 firstResponder:(id)arg3 viewControllerCreationBlock:(CDUnknownBlockType)arg4;
- (id)offlineMixtapeControllerWithFirstResponder:(id)arg1;
- (id)downloadsControllerWithFirstResponder:(id)arg1;
- (id)clientProvidedSectionControllersWithFirstResponder:(id)arg1;
- (id)sectionControllerForRenderer:(id)arg1 firstResponder:(id)arg2;
- (id)init;

@end

