//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ContentPresenter-Protocol.h"

@class NSString;
@protocol ContentView, ReusableView;

@protocol HeaderPresenter <ContentPresenter>
@property(readonly, nonatomic) _Bool shouldAlwaysShowHeader;
- (NSString *)headerIdentifierForInfo:(id)arg1;
- (struct CGSize)headerSizeForInfo:(id)arg1 inContentView:(id <ContentView>)arg2;
- (void)displayInfo:(id)arg1 inHeader:(id <ReusableView>)arg2;
@end

