//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTSocialListeningGLUETheme, SPTSocialListeningSessionFacepileItemViewStyle;
@protocol GLUEImageLoader;

@interface SPTSocialListeningFacepileItemViewConfigurator : NSObject
{
    id <GLUEImageLoader> _glueImageLoader;
    SPTSocialListeningGLUETheme *_theme;
    SPTSocialListeningSessionFacepileItemViewStyle *_itemStyle;
}

@property(retain, nonatomic) SPTSocialListeningSessionFacepileItemViewStyle *itemStyle; // @synthesize itemStyle=_itemStyle;
@property(readonly, nonatomic) SPTSocialListeningGLUETheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
- (void).cxx_destruct;
- (void)configureItem:(id)arg1 withNumber:(id)arg2;
- (void)configureItem:(id)arg1 withViewModel:(id)arg2;
- (id)initWithImageLoader:(id)arg1 theme:(id)arg2;

@end

