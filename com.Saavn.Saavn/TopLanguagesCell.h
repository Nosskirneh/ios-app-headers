//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class LanguageVC, NSArray, NSMutableArray;

@interface TopLanguagesCell : UITableViewCell
{
    NSArray *langs;
    NSArray *preselectedLangs;
    NSMutableArray *btns;
    _Bool langsSet;
    _Bool layoutDone;
    LanguageVC *languageVC;
}

+ (double)rowHeightFor:(id)arg1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)initCell;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 inVC:(id)arg3 withLanguages:(id)arg4 andPreselections:(id)arg5;

@end
