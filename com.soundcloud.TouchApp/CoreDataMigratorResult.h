//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSNumber;

@interface CoreDataMigratorResult : NSObject
{
    _Bool _successful;
    _Bool _attempted;
    NSNumber *_databaseSizeInKb;
    NSError *_error;
}

+ (id)resultWithSuccessful:(_Bool)arg1 attempted:(_Bool)arg2 databaseSizeInKb:(id)arg3 error:(id)arg4;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSNumber *databaseSizeInKb; // @synthesize databaseSizeInKb=_databaseSizeInKb;
@property(nonatomic) _Bool attempted; // @synthesize attempted=_attempted;
@property(nonatomic) _Bool successful; // @synthesize successful=_successful;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSuccessful:(_Bool)arg1 attempted:(_Bool)arg2 databaseSizeInKb:(id)arg3 error:(id)arg4;

@end
