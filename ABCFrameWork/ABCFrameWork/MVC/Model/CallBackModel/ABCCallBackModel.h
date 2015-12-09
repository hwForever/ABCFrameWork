//
//  ABCCallBackModel.h
//  ABCFrameWork
//
//  Created by Robert on 15/12/9.
//  Copyright © 2015年 NationSky. All rights reserved.
//

#import <JSONModel/JSONModel.h>

@interface ABCCallBackModel : JSONModel

/**
 *  主键ID
 */
@property (nonatomic, assign) long abc_id;

/**
 *  索引 子类需要重写索引的get方法
 */
@property (nonatomic, copy, readonly) NSString *uniqueIndex;

#pragma mark - 表操作
/**
 *  创建表
 */
- (BOOL)createTable;

/**
 *  删除表
 */
- (BOOL)dropTable;

/**
 *  判断表是否存在
 */
- (BOOL)checkTableIsExist;



#pragma mark - 表数据操作
/**
 *  插入数据
 */
- (BOOL)insertTable;

/**
 *  更新数据
 */
- (BOOL)updateTable;

/**
 *  移除数据
 */
- (BOOL)deleteFromTable;

/**
 *  查询全部数据
 *
 *  @return 参数对象数组
 */
- (NSArray *)selectFromTable;

/**
 *  查询语句
 *
 *  @param conditions 条件
 *  @param args       值
 *  @param pageNumber 页数
 *  @param pageSize   条数
 *  @param order      排序
 *
 *  @return 参数对象数组
 */
- (NSArray *)selectByConditions:(NSString*)conditions
                           args:(NSArray*)args
                     pageNumber:(NSInteger)pageNumber
                       pageSize:(NSInteger)pageSize
                          order:(NSString*)order;

@end
