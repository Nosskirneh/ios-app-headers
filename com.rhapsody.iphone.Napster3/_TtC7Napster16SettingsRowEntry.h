//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexPath, NSString, UITableViewCell, _TtC7Napster20SettingsSectionEntry;

@interface _TtC7Napster16SettingsRowEntry : NSObject
{
    // Error parsing type: , name: storyboardRowNumber
    // Error parsing type: , name: title
    // Error parsing type: , name: section
    // Error parsing type: , name: cell
    // Error parsing type: , name: toExecute
    // Error parsing type: , name: newCell
}

- (void).cxx_destruct;
@property(nonatomic, readonly) NSIndexPath *indexPath;
@property(nonatomic, readonly) NSString *description;
- (id)init;
@property(nonatomic, copy) CDUnknownBlockType newCell; // @synthesize newCell;
@property(nonatomic, copy) CDUnknownBlockType toExecute; // @synthesize toExecute;
@property(nonatomic, retain) UITableViewCell *cell; // @synthesize cell;
@property(nonatomic, retain) _TtC7Napster20SettingsSectionEntry *section; // @synthesize section;
@property(nonatomic, copy) NSString *title; // @synthesize title;
@property(nonatomic) long long storyboardRowNumber; // @synthesize storyboardRowNumber;

@end

