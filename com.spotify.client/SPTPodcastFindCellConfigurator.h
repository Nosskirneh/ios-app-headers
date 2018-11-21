//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, SPTPodcastFindTheme;
@protocol GLUEImageLoader, GLUEStyle;

@interface SPTPodcastFindCellConfigurator : NSObject
{
    id <GLUEImageLoader> _glueImageLoader;
    SPTPodcastFindTheme *_theme;
    id <GLUEStyle> _style;
    NSDictionary *_musicDescriptionDict;
    NSDictionary *_podcastDescriptionDict;
}

@property(retain, nonatomic) NSDictionary *podcastDescriptionDict; // @synthesize podcastDescriptionDict=_podcastDescriptionDict;
@property(retain, nonatomic) NSDictionary *musicDescriptionDict; // @synthesize musicDescriptionDict=_musicDescriptionDict;
@property(retain, nonatomic) id <GLUEStyle> style; // @synthesize style=_style;
@property(readonly, nonatomic) SPTPodcastFindTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
- (void).cxx_destruct;
- (id)provideDescriptionForPodcastCategory:(id)arg1;
- (id)provideMusicDescriptionForMusicCategory:(id)arg1;
- (id)provideDescriptionForCategory:(id)arg1 contentType:(unsigned long long)arg2;
- (void)initialiseDescriptions;
- (void)configureRowCell:(id)arg1 withModel:(id)arg2 contentType:(unsigned long long)arg3;
- (void)configureCardCell:(id)arg1 withModel:(id)arg2 contentType:(unsigned long long)arg3;
- (id)initWithImageLoader:(id)arg1 theme:(id)arg2;

@end

