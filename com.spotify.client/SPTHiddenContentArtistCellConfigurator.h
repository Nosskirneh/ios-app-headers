//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GLUEEntityRowStyle;
@protocol GLUEImageLoader, GLUETheme, SPTHiddenContentArtistCellDelegate;

@interface SPTHiddenContentArtistCellConfigurator : NSObject
{
    id <SPTHiddenContentArtistCellDelegate> _cellDelegate;
    id <GLUEImageLoader> _glueImageLoader;
    id <GLUETheme> _theme;
    GLUEEntityRowStyle *_artistRowStyle;
}

@property(retain, nonatomic) GLUEEntityRowStyle *artistRowStyle; // @synthesize artistRowStyle=_artistRowStyle;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
@property(nonatomic) __weak id <SPTHiddenContentArtistCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
- (void).cxx_destruct;
- (void)setUpLeadingAccessoryForCell:(id)arg1 viewModel:(id)arg2;
- (void)setUpTrailingAccessoryForCell:(id)arg1 viewModel:(id)arg2 oldInteractionListener:(id)arg3;
- (void)setUpContentViewForCell:(id)arg1;
- (void)configureCell:(id)arg1 withArtistViewModel:(id)arg2;
- (id)initWithImageLoader:(id)arg1 theme:(id)arg2 cellDelegate:(id)arg3;

@end

