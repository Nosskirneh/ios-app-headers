//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ANGRACBoolSignal, ANGRACColorSignal, ANGRACSignal;

@interface _TtC7Anghami19ANGNightModeManager : NSObject
{
    // Error parsing type: , name: nightModeStatusSignalBool.storage
    // Error parsing type: , name: nightModeStatusSignal.storage
    // Error parsing type: , name: keyboardAppearanceSignal.storage
    // Error parsing type: , name: blackToGrayTextSignal.storage
    // Error parsing type: , name: whiteToGrayTextSignal.storage
    // Error parsing type: , name: darkGrayToLightGraySignal.storage
    // Error parsing type: , name: lightToDarkGraySignal.storage
    // Error parsing type: , name: whiteToDarkGraySignal.storage
    // Error parsing type: , name: purpleToWhiteSignal.storage
    // Error parsing type: , name: searchBarBorderSignal.storage
    // Error parsing type: , name: navBarWhiteSignal.storage
    // Error parsing type: , name: purpleButtonSignal.storage
    // Error parsing type: , name: grayPlaceholderSignal.storage
    // Error parsing type: , name: grayTextSignal.storage
    // Error parsing type: , name: selectedRowSignal.storage
    // Error parsing type: , name: newGrayTextSignal.storage
    // Error parsing type: , name: graySeparatorSignal.storage
    // Error parsing type: , name: questiontableBackgroundWhiteSignal.storage
    // Error parsing type: , name: whiteBaseBackgroundSignal.storage
    // Error parsing type: , name: whiteHeaderSignal.storage
    // Error parsing type: , name: tableBackgroundWhiteSignal.storage
    // Error parsing type: , name: veryLightGraySignal.storage
    // Error parsing type: , name: lighterGraySignal.storage
    // Error parsing type: , name: lightGraySignal.storage
    // Error parsing type: , name: graySignal.storage
    // Error parsing type: , name: grayToWhiteSignal.storage
    // Error parsing type: , name: grayButtonBackgroundSignal.storage
    // Error parsing type: , name: darkGraySignal.storage
    // Error parsing type: , name: evenDarkerGraySignal.storage
    // Error parsing type: , name: darkestGraySignal.storage
    // Error parsing type: , name: almostWhiteToBlackSignal.storage
    // Error parsing type: , name: blackToAlmostWhiteSignal.storage
    // Error parsing type: , name: blackToWhiteSignal.storage
    // Error parsing type: , name: halfTintedBlackSignal.storage
    // Error parsing type: , name: blackToLightGraySignal.storage
    // Error parsing type: , name: blackToLightishGraySignal.storage
    // Error parsing type: , name: switchBorderSignal.storage
    // Error parsing type: , name: grayButtonTextBorderSignal.storage
    // Error parsing type: , name: graySubtitleDarkerSignal.storage
    // Error parsing type: , name: darkGrayTextSignal.storage
    // Error parsing type: , name: moreButtonSignal.storage
    // Error parsing type: , name: blackTextSignal.storage
    // Error parsing type: , name: textureOneSignal.storage
    // Error parsing type: , name: selectorBorderSignal.storage
    // Error parsing type: , name: progressTintSignal.storage
    // Error parsing type: , name: lightPurpleSignal.storage
    // Error parsing type: , name: slidingPurpleSignal.storage
    // Error parsing type: , name: purpleToGraySignal.storage
    // Error parsing type: , name: veryDarkPurpleSignal.storage
    // Error parsing type: , name: lightPurpleButtonSignal.storage
    // Error parsing type: , name: purpleTextSignal.storage
    // Error parsing type: , name: tabBarSignal.storage
    // Error parsing type: , name: tabBarSelectedSignal.storage
    // Error parsing type: , name: skeletonViewSignal.storage
}

+ (void)switchModeWithTurnOn:(_Bool)arg1 source:(id)arg2;
+ (id)sharedInstance;
- (CDUnknownBlockType).cxx_destruct;
- (id)init;
@property(nonatomic, retain) ANGRACColorSignal *skeletonViewSignal;
@property(nonatomic, retain) ANGRACColorSignal *tabBarSelectedSignal;
@property(nonatomic, retain) ANGRACColorSignal *tabBarSignal;
@property(nonatomic, retain) ANGRACColorSignal *purpleTextSignal;
@property(nonatomic, retain) ANGRACColorSignal *lightPurpleButtonSignal;
@property(nonatomic, retain) ANGRACColorSignal *veryDarkPurpleSignal;
@property(nonatomic, retain) ANGRACColorSignal *purpleToGraySignal;
@property(nonatomic, retain) ANGRACColorSignal *slidingPurpleSignal;
@property(nonatomic, retain) ANGRACColorSignal *lightPurpleSignal;
@property(nonatomic, retain) ANGRACColorSignal *progressTintSignal;
@property(nonatomic, retain) ANGRACColorSignal *selectorBorderSignal;
@property(nonatomic, retain) ANGRACColorSignal *textureOneSignal;
@property(nonatomic, retain) ANGRACColorSignal *blackTextSignal;
@property(nonatomic, retain) ANGRACColorSignal *moreButtonSignal;
@property(nonatomic, retain) ANGRACColorSignal *darkGrayTextSignal;
@property(nonatomic, retain) ANGRACColorSignal *graySubtitleDarkerSignal;
@property(nonatomic, retain) ANGRACColorSignal *grayButtonTextBorderSignal;
@property(nonatomic, retain) ANGRACColorSignal *switchBorderSignal;
@property(nonatomic, retain) ANGRACColorSignal *blackToLightishGraySignal;
@property(nonatomic, retain) ANGRACColorSignal *blackToLightGraySignal;
@property(nonatomic, retain) ANGRACColorSignal *halfTintedBlackSignal;
@property(nonatomic, retain) ANGRACColorSignal *blackToWhiteSignal;
@property(nonatomic, retain) ANGRACColorSignal *blackToAlmostWhiteSignal;
@property(nonatomic, retain) ANGRACColorSignal *almostWhiteToBlackSignal;
@property(nonatomic, retain) ANGRACColorSignal *darkestGraySignal;
@property(nonatomic, retain) ANGRACColorSignal *evenDarkerGraySignal;
@property(nonatomic, retain) ANGRACColorSignal *darkGraySignal;
@property(nonatomic, retain) ANGRACColorSignal *grayButtonBackgroundSignal;
@property(nonatomic, retain) ANGRACColorSignal *grayToWhiteSignal;
@property(nonatomic, retain) ANGRACColorSignal *graySignal;
@property(nonatomic, retain) ANGRACColorSignal *lightGraySignal;
@property(nonatomic, retain) ANGRACColorSignal *lighterGraySignal;
@property(nonatomic, retain) ANGRACColorSignal *veryLightGraySignal;
@property(nonatomic, retain) ANGRACColorSignal *tableBackgroundWhiteSignal;
@property(nonatomic, retain) ANGRACColorSignal *whiteHeaderSignal;
@property(nonatomic, retain) ANGRACColorSignal *whiteBaseBackgroundSignal;
@property(nonatomic, retain) ANGRACColorSignal *questiontableBackgroundWhiteSignal;
@property(nonatomic, retain) ANGRACColorSignal *graySeparatorSignal;
@property(nonatomic, retain) ANGRACColorSignal *newGrayTextSignal;
@property(nonatomic, retain) ANGRACColorSignal *selectedRowSignal;
@property(nonatomic, retain) ANGRACColorSignal *grayTextSignal;
@property(nonatomic, retain) ANGRACColorSignal *grayPlaceholderSignal;
@property(nonatomic, retain) ANGRACColorSignal *purpleButtonSignal;
@property(nonatomic, retain) ANGRACColorSignal *navBarWhiteSignal;
@property(nonatomic, retain) ANGRACColorSignal *searchBarBorderSignal;
@property(nonatomic, retain) ANGRACColorSignal *purpleToWhiteSignal;
@property(nonatomic, retain) ANGRACColorSignal *whiteToDarkGraySignal;
@property(nonatomic, retain) ANGRACColorSignal *lightToDarkGraySignal;
@property(nonatomic, retain) ANGRACColorSignal *darkGrayToLightGraySignal;
@property(nonatomic, retain) ANGRACColorSignal *whiteToGrayTextSignal;
@property(nonatomic, retain) ANGRACColorSignal *blackToGrayTextSignal;
@property(nonatomic, retain) ANGRACSignal *keyboardAppearanceSignal;
@property(nonatomic, retain) ANGRACBoolSignal *nightModeStatusSignal;
@property(nonatomic) _Bool nightModeStatusSignalBool;

@end

