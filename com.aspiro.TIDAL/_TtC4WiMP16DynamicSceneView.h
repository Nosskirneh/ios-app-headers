//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WMPAbstractScene.h"

@class UIScrollView, _TtC4WiMP18DynamicSceneLoader;

@interface _TtC4WiMP16DynamicSceneView : WMPAbstractScene
{
    // Error parsing type: , name: scrollView
    // Error parsing type: , name: dataSource
    // Error parsing type: , name: dynamicSceneData
    // Error parsing type: , name: headerTitle
    // Error parsing type: , name: viewIsVisible
    // Error parsing type: , name: dynamicSceneBuilder.storage
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic, retain) _TtC4WiMP18DynamicSceneLoader *dataSource; // @synthesize dataSource;
@property(nonatomic, readonly) UIScrollView *scrollView; // @synthesize scrollView;

@end
