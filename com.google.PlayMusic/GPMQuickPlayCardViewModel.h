//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPMPlayableCardViewModel.h"

@class GPMContextMenuViewModel, NSString, UIColor;

@interface GPMQuickPlayCardViewModel : GPMPlayableCardViewModel
{
    UIColor *_titleColor;
    UIColor *_subtitleColor;
    NSString *_indexText;
    UIColor *_indexTextColor;
    UIColor *_indexTextBackgroundColor;
    NSString *_logToken;
    NSString *_dismissalToken;
    long long _dismissalType;
    NSString *_dismissalKey;
    GPMContextMenuViewModel *_contextMenuViewModel;
}

+ (id)viewModelForItem:(id)arg1;
@property(retain, nonatomic) GPMContextMenuViewModel *contextMenuViewModel; // @synthesize contextMenuViewModel=_contextMenuViewModel;
@property(copy, nonatomic) NSString *dismissalKey; // @synthesize dismissalKey=_dismissalKey;
@property(nonatomic) long long dismissalType; // @synthesize dismissalType=_dismissalType;
@property(copy, nonatomic) NSString *dismissalToken; // @synthesize dismissalToken=_dismissalToken;
@property(copy, nonatomic) NSString *logToken; // @synthesize logToken=_logToken;
@property(retain, nonatomic) UIColor *indexTextBackgroundColor; // @synthesize indexTextBackgroundColor=_indexTextBackgroundColor;
@property(retain, nonatomic) UIColor *indexTextColor; // @synthesize indexTextColor=_indexTextColor;
@property(copy, nonatomic) NSString *indexText; // @synthesize indexText=_indexText;
@property(retain, nonatomic) UIColor *subtitleColor; // @synthesize subtitleColor=_subtitleColor;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
- (void).cxx_destruct;
- (id)initWithSquareCardDescriptor:(struct GTLRMusicPA_GoogleInternalPlayMusicInnerjamV1RenderersSquarePlayableCardDescriptor *)arg1;
- (id)initWithItem:(id)arg1 recentSectionDescriptor:(struct GTLRMusicPA_GoogleInternalPlayMusicInnerjamV1RenderersHomeRecents *)arg2;
- (id)initWithItem:(id)arg1;

@end
