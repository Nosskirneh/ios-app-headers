//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GLUEStyle-Protocol.h"

@class UIColor;
@protocol SPTSortingFilteringClearFiltersControlStyle, SPTSortingFilteringFilterBarSortButtonStyle, SPTSortingFilteringSearchFieldStyle;

@protocol SPTSortingFilteringFilterBarStyle <GLUEStyle>
@property(copy, nonatomic) id <SPTSortingFilteringClearFiltersControlStyle> clearFiltersControlStyle;
@property(copy, nonatomic) id <SPTSortingFilteringSearchFieldStyle> searchFieldStyle;
@property(nonatomic) double height;
@property(nonatomic) double spacing;
@property(nonatomic) double topMargin;
@property(nonatomic) double margin;
@property(copy, nonatomic) UIColor *backgroundColor;
@property(copy, nonatomic) id <SPTSortingFilteringFilterBarSortButtonStyle> contextMenuButtonStyle;
@end

