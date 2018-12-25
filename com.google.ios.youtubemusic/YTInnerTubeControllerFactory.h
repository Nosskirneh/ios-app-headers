//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, YTInnerTubeUIServiceMapper;

@interface YTInnerTubeControllerFactory : NSObject
{
    YTInnerTubeUIServiceMapper *_innerTubeUIServiceMapper;
    NSMapTable *_viewControllerModelMapping;
    NSMapTable *_sectionControllerModelMapping;
    NSMapTable *_topControllerMatchingBlockMapping;
    NSMapTable *_sectionControllerModelToMatchingBlockCreationBlockMapping;
}

- (void).cxx_destruct;
- (id)createSectionControllerFromPairsArray:(id)arg1 forRenderer:(id)arg2 service:(id)arg3 parentResponder:(id)arg4;
- (_Bool)isModalViewControllerForNavigationEndpoint:(id)arg1;
- (id)sectionControllerForRenderer:(id)arg1 service:(id)arg2 parentResponder:(id)arg3;
- (id)controllerForNavigationEndpoint:(id)arg1 parentResponderCreationBlock:(CDUnknownBlockType)arg2;
- (id)controllerForNavigationEndpoint:(id)arg1 parentResponder:(id)arg2;
- (id)sectionControllerForModelClass:(Class)arg1 service:(id)arg2 parentResponder:(id)arg3;
- (id)viewControllerForModelClass:(Class)arg1 service:(id)arg2 parentResponder:(id)arg3;
- (id)initWithInnerTubeUIServiceMapper:(id)arg1;

@end

