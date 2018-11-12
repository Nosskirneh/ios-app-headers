//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@protocol HUBViewModel, HUBViewModelLoaderDelegate;

@protocol HUBViewModelLoader
@property(readonly, nonatomic) _Bool isLoading;
@property(readonly, nonatomic) id <HUBViewModel> initialViewModel;
@property(nonatomic) __weak id <HUBViewModelLoaderDelegate> delegate;
- (void)loadNextPageForCurrentViewModel;
- (void)reloadViewModel;
- (void)loadViewModel;
@end

