//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class DZRSynchronizedMusicDataSource, _TtC6Deezer17ConversionService;

@interface DZRDownloadsUnavailableViewController : UIViewController
{
    DZRSynchronizedMusicDataSource *_itemsDataSource;
    _TtC6Deezer17ConversionService *_conversionService;
    double _heightConverView;
    CDUnknownBlockType _leftActionButton;
    CDUnknownBlockType _rightActionButton;
    struct CGRect _frameBanner;
}

@property(copy, nonatomic) CDUnknownBlockType rightActionButton; // @synthesize rightActionButton=_rightActionButton;
@property(copy, nonatomic) CDUnknownBlockType leftActionButton; // @synthesize leftActionButton=_leftActionButton;
@property(nonatomic) double heightConverView; // @synthesize heightConverView=_heightConverView;
@property(nonatomic) __weak _TtC6Deezer17ConversionService *conversionService; // @synthesize conversionService=_conversionService;
@property(nonatomic) struct CGRect frameBanner; // @synthesize frameBanner=_frameBanner;
@property(nonatomic) __weak DZRSynchronizedMusicDataSource *itemsDataSource; // @synthesize itemsDataSource=_itemsDataSource;
- (void).cxx_destruct;
- (void)loadView;
- (void)popUpConfirmation;

@end

