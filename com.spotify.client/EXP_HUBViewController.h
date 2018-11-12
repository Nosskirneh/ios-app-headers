//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class EXP_HUBComponentRegistry, EXP_HUBContainerView;
@protocol EXP_HUBComponentEventHandler, EXP_HUBComponentLayoutManager, EXP_HUBImageLoaderFactory;

@interface EXP_HUBViewController : UIViewController
{
    EXP_HUBComponentRegistry *_componentRegistry;
    id <EXP_HUBComponentLayoutManager> _componentLayoutManager;
    id <EXP_HUBImageLoaderFactory> _imageLoaderFactory;
    id <EXP_HUBComponentEventHandler> _componentEventHandler;
}

@property(retain, nonatomic) id <EXP_HUBComponentEventHandler> componentEventHandler; // @synthesize componentEventHandler=_componentEventHandler;
@property(readonly, nonatomic) id <EXP_HUBImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(readonly, nonatomic) id <EXP_HUBComponentLayoutManager> componentLayoutManager; // @synthesize componentLayoutManager=_componentLayoutManager;
@property(readonly, nonatomic) EXP_HUBComponentRegistry *componentRegistry; // @synthesize componentRegistry=_componentRegistry;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)loadView;
- (id)initWithComponentRegistry:(id)arg1 componentLayoutManager:(id)arg2 imageLoaderFactory:(id)arg3 commandHandler:(id)arg4;

// Remaining properties
@property(retain, nonatomic) EXP_HUBContainerView *view; // @dynamic view;

@end

