//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface RHSearchAllNoContentView : UIView
{
    NSString *_searchTerm;
    UILabel *_noResultsLabel;
    UILabel *_suggestionLabel;
}

@property(nonatomic) __weak UILabel *suggestionLabel; // @synthesize suggestionLabel=_suggestionLabel;
@property(nonatomic) __weak UILabel *noResultsLabel; // @synthesize noResultsLabel=_noResultsLabel;
@property(retain, nonatomic) NSString *searchTerm; // @synthesize searchTerm=_searchTerm;
- (void).cxx_destruct;
- (void)updateSuggestionLabel;
- (void)updateNoResultsLabel;
- (void)awakeFromNib;

@end

