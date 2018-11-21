//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTHomeMixGlueTheme;
@protocol GLUEImageLoader;

@interface SPTHomeMixFamilyPileConfigurator : NSObject
{
    unsigned long long _maxNumberOfVisibleElements;
    SPTHomeMixGlueTheme *_theme;
    id <GLUEImageLoader> _glueImageLoader;
}

@property(readonly, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
@property(readonly, nonatomic) SPTHomeMixGlueTheme *theme; // @synthesize theme=_theme;
@property(nonatomic) unsigned long long maxNumberOfVisibleElements; // @synthesize maxNumberOfVisibleElements=_maxNumberOfVisibleElements;
- (void).cxx_destruct;
- (id)imageViewWithURL:(id)arg1;
- (id)overflowViewWithCount:(unsigned long long)arg1;
- (id)textViewWithText:(id)arg1 backgroundColor:(id)arg2;
- (void)configurePileContainer:(id)arg1 viewModels:(id)arg2;
- (id)initWithTheme:(id)arg1 glueImageLoader:(id)arg2;

@end

