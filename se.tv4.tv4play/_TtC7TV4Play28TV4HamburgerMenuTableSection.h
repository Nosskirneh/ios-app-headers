//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface _TtC7TV4Play28TV4HamburgerMenuTableSection : NSObject
{
    // Error parsing type: , name: title
    // Error parsing type: , name: iconImageName
    // Error parsing type: , name: sectionRows
    // Error parsing type: , name: open
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (id)initWithTitle:(id)arg1 iconImageName:(id)arg2;
- (_Bool)alreadyContainsRowWithTitle:(id)arg1;
- (_Bool)alreadyContainsRow:(id)arg1;
- (void)removeRow:(id)arg1;
- (void)addRow:(id)arg1;
@property(nonatomic) _Bool open; // @synthesize open;
@property(nonatomic, readonly) NSArray *rows;
@property(nonatomic, copy) NSString *iconImageName; // @synthesize iconImageName;
@property(nonatomic, copy) NSString *title; // @synthesize title;

@end

