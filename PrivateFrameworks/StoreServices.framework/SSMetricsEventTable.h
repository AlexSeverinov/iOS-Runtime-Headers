/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSSQLiteDatabase;

@interface SSMetricsEventTable : NSObject {
    SSSQLiteDatabase *_database;
}

+ (id)databasePath;

- (BOOL)_setupDatabase;
- (void)dealloc;
- (id)init;
- (id)initWithDatabase:(id)arg1;
- (void)performTransctionWithBlock:(id)arg1;

@end
